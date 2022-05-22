#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: b_len
 */
int _printf(const char *format, ...)
{
	register int count = 0;
	va_list arguments;
	char *str;
	int (*func)(va_list);
	va_start(arguments, format);

	str = format;
	while(*str)
	{
		if (*str == '%')
		{
			str++;
			func = get_func(*str);
			if (!func)

			count += func(args);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	va_end(arguments);
	return (count);
}
