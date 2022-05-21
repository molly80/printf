#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _printchar - Prints a char
  * @args: A list of variadic arguments
  *
  * Return: The length of the character
  */
int _printchar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
  * _printstring - Prints a string
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int _printstring(va_list args)
{
	char *arg = va_arg(args, char *);

	if (!arg)
		arg = "(null)";

	return (_puts(arg));
}
