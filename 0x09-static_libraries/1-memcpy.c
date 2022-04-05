#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer
* @src: pointer
* @n: constant
* Return: s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
