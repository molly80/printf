#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* vprintk - function to define how different states are handled 
* @fmt: string whit format to print
*
* condition:
* 0: regular
* 1: escape
*/
void vprintk( const char* fmt, va_list args)
{
	int condition = 0;
	while (*fmt != '\0') {
		if (condition == 0)
		{
			if (*fmt == '%')
			{
				condition = 1;
			} else {
				 putchar(*fmt);
			}
		} else if (condition == 1)
		{
			switch (*fmt)
		{
			case 'c': {
				char ch = va_arg(args, int);
				putchar(ch);
				break;
			}
			case 's': {
				const char *s = va_arg(args, const char* );
				while (*s)
				{
					putchar(*s++);
				}
				break;
			}

			case '%':{

				break;
			}


		}
		condition = 0;
		}


      fmt++;

    }

}
/**
 * _printf - function my printf
 * @format: string which format to print
 *
 * Return: number of chars that print
 */

int _printf(const char* format, ...)
{
va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	vprintk(format,args);
	va_end(args);
	return (length);
}
