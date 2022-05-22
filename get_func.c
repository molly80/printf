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
int (*get_func(char s))(va_list, flag_t *)
{
	id func_arr[] = {
		{'s', _printstring},
		{'c', _printchar},
/*		{'%', _printpercent},*/
	};
	int flags = 2;
	
	register int i;


	for (i = 0; i < flags; i++)
		if (func_arr[i].symbol == s)
			return (func_arr[i].f);
	return (NULL);

}
