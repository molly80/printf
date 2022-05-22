#include "main.h"

/**
 * _print_char - prints a character to the screen
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 *
 * Return: void
 */
int _print_char(va_list valist, flag_t *f)
{
	(void)f;

	_putchar(va_arg(valist, int));
	return (1);
}

/**
 * _print_str - prints a string to the screen
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 *
 * Return: void
 */
int _print_str(va_list valist, flag_t *f)
{
	char *str = va_arg(valist, char *);

	(void)f;

	if (!str)
		str = "(null)";

	return (_puts(str));
}
