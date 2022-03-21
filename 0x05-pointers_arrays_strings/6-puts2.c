#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: String to be printed
 *
 *Returns: a string followed by a new line
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
