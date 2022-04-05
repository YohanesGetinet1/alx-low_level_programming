#include "main.h"

/**
* _strspn - length of a prefix substring
* @s: pointer
* @accept: pointer
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
int length = 0;
int x = 0;
int y = 0;

while (s[x] != '\0')
{

while (accept[y] != '\0')
{

if (accept[y] == s[x])
length++;
y++;

}

y = 0;
x++;

if (s[x] == ' ')
{
break;
}
}
return (length);
}
