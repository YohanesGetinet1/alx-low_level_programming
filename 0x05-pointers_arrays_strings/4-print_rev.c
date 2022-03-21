#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: takes string
 *
 * Return: returns the length int
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * print_rev - prints stirng in reverse
 * @s: takes string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
