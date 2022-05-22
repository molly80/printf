#include "main.h"

/**
 * _print_binary - function to print base two numbers
 * @valist: valist parameter
 *
 * Return: length of number
 */
int _print_binary(va_list valist1)
{
	unsigned int number = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 2, 1);
	return (_puts(str));
}

/**
 * _print_hexa_upper - prints numbers in uppercase hexadecimal formart
 * @valist: va_list parameter
 *
 * Return: length of number
 */
int _print_hexa_upper(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 16, 0);
		return (_puts(str));
}

/**
 * _print_octal - prints numbers in octal format
 * @valist: va_list parameter
 *
 * Return: length of number
 */
int _print_octal(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 8, 1);
	return (_puts(str));
}

/**
 * _print_unsigned - prints unsigned numbers
 * @valist: valist parameter
 *
 * Return: str array
 */
int _print_unsigned(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 10, 1);
	return (_puts(str));
}
