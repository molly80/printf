#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/* condition:
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


int _printf(const char* format, ...)
{ int _printf;
	va_list args;
	va_start(args, format);
	vprintk(format, args);
	va_end(args);

return _printf;

}
