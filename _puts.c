/**
 * _puts - Helps print a string to the terminal
 * @str: string parameter
 *
 * Return: number of characters in @str
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
