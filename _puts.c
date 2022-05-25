#include "main.h"
/**
 * _puts - Helps print a string to the terminal
 * @str: string parameter
 *
 * Return: number of characters in @str
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
