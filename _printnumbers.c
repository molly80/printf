#include "main.h"

/**
 * _print_dec - prints decimal numbers to the screen
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 *
 * Return: Always (0);
 */
int _print_dec(va_list valist, flag_t *f)
{
	int num = va_arg(valist, int);
	int count = count_digits(num);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		count += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		count += _putchar('+');
	if (num <= 0)
		count++;

	print_number(num);
	return (count);
}


/**
 * print_number - helps other functions print numbers to the screen
 * @n: integer parameter
 *
 * Return: void
 */
void print_number(int n)
{

	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}


	if (m / 10)
		print_number(m / 10);
	_putchar('0' + (m % 10));
}


/**
 * count_digits - counts the number of digits in a number
 * @n: integer parameter
 *
 * Return: number of digits
 */
int count_digits(int n)
{
	unsigned int count = 0;
	unsigned int m;

	if (n < 0)
		m = (-1 * n);
	else
		m = n;
	while (m != 0)
	{
		m /= 10;
		count++;
	}
	return (count);
}
