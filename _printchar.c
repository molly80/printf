#include "main.h"

/**
  * _printchar - Prints a char
  * @args: A list of variadic arguments
  *@p: pointer to flag_t
  * Return: The length of the character
  */
int _printchar(va_list args, flag_t *p)
{
	(void)p;
	_putchar(va_arg(args, int));
	return (1);
}

/**
  * _printstring - Prints a string
  * @args: A list of variadic arguments
  *@p: pointer to flag_t
  * Return: The length of the string
  */
int _printstring(va_list args, flag_t *p)
{
	char *arg = va_arg(args, char *);

	(void)p;
	if (!arg)
		arg = "(null)";

	return (_puts(arg));
}

/**
 * _print_specifier - function to handle custom conversion specifier
 * @args: variable list of arguments
 * @p: pointer to flag_t
 *
 * Return: counts
 */
int _printspecifier(va_list args, flag_t *p)
{
	int i;
	int count = 0;
	char *hex;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
		return (_puts(str));
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			hex =  convert(str[i], 16, 0);
			if (!hex[1])
			{
				count += _putchar('0');
			}
			count += _puts(hex);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}
	(void)p;
	return (count);
}
