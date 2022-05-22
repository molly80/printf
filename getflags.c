#include "main.h"

/**
 * get_flags - determines which flags to set based on the format strings
 * @elem: char parameter
 * @p: flag_t parameter
 *
 * Return: return code
 */
int get_flags(char elem, flag_t *p)
{
	int i = 0;

	switch (elem)
	{
		case '+':
			p->plus = 1;
			i = 1;
			break;
		case ' ':
			p->space = 1;
			i = 1;
			break;
		case '#':
			p->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
