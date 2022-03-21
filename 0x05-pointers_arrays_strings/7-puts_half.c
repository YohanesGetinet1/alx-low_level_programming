#include "main.h"

/**
 * puts_half - prints half of a string
 * if odd len, start at (len - 1) / 2
 *
 * @str: string to be printed
 *
 *Returns: half of the string
 */


int _strlen(char *s) /*length of string*/
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
	return (i);
}

/* printing half string*/

void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
