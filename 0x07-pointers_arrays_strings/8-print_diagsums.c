#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* @a: pointer
* @size: size
* Return: 0
*/

void print_diagsums(int *a, int size)
{
int x, y, z;
int m = 0;
int n = 0;

for (x = 0; x < size; x++)
{
z = (x * size) + x;
m += *(a + z);
}
for (y = 0; y < size; y++)
{
z = (y * size) + (size - 1 - y);
n += *(a + z);
}
printf("%d, %d\n", m, n);
}
