#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer
* @c: contant
* Return: NULL
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
i++;
if (s[i] == c)
return (s + i);
}
return ('\0');
}