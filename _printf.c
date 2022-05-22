#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: b_len
 */
int _printf(const char *format, ...)
{
	int (*func)(va_list, flag_t *);
	const char *s;
	va_list arguments;
	flag_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (s = format; *s; s++)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flags(*s, &flags))
				s++;
			func = get_func(*s);
			count += (func)
				? func(arguments, &flags)
				: _printf("%%%c", *s);
		} else
			count += _putchar(*s);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
