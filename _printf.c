#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - function my printf
 * @format: string which format to print
 *
 * Return: number of chars that print
 */

int _printf(const char *format, ...)
{

	register int count = 0;
	va_list args;
	const char *str;
	int (*func)(va_list);

	va_start(args, format);
	str = format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				func = get_func(*str);
				if (!func)
				{
					_putchar(*str);
					count++;
				}
				else
					count += func(args);
			}
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
