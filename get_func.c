#include "main.h"

/**
 * get_func - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_func(char s))(va_list)
{
	id func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent},
		{'u', _print_unsigned},
		{'\0', NULL}
	};
	int i = 0;

	while (func_arr[i].symbol != '\0')
	{
		if (func_arr[i].symbol == s)
		{
			return (func_arr[i].func);
		}
		i++;
	}
	return (NULL);
}
