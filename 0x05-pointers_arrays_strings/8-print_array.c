#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a:array
 * @n:number of array elements
 *
 *Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
