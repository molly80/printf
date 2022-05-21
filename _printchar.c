#include "main.h"

/**
 * _printchar - prints a character to the screen
 * @args:list of arguments
 *
 * Return: void
 */
int _printchar(va_list args)
{
	return (putchar(va_arg(args, int)));
}

/**
 * _printstr - prints a string to the screen
 * @args: list of arguments
 *
 * Return: void
 */
int _printstr(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	return (puts(str));
}
