#include "main.h"

/**
 * _print_address - function to print address
 * @valist: variable arguments
 * @f: pointer to flag_t
 *
 * Return: count
 */
int _print_address(va_list valist, flag_t *f)
{
	char *str;
	int count = 0;
	unsigned long int addr = va_arg(valist, unsigned long int);

	if (!addr)
	{
		return (_puts("(nil)"));
	}

	(void)f;

	count += _putchar('0');
	count += _putchar('x');
	str = convert(addr, 16, 1);
	count += _puts(str);

	return (count);
}
