#include "main.h"

/**
 * print_buffer - prints the content of the buffer pointed by b.
 * The output should print 10 bytes per line
 * @b: pointer to buffer
 * @size: buffer size
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	unsigned int i;


	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", b[i]);
		i++;

	}

	printf("\n");
}
