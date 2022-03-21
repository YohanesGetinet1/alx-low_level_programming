#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int tupapiesteban;

	for (tupapiesteban = 0; str[tupapiesteban] != '\0'; tupapiesteban++)
		;

	tupapiesteban++;
	for (tupapiesteban /= 2; str[tupapiesteban] != '\0'; tupapiesteban++)
	{
		_putchar(str[tupapiesteban]);
	}
	_putchar('\n');
}
