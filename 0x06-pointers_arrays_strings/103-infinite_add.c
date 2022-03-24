#include <main.h>

char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: a pointer to the result
 * f the result can not be stored in r the function must return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, pend = 0, filln;
	char *sum = "\0", *fillc = "0000000000000";

	if (_strlen(n1) > _strlen(n2) && _strlen(n1) < size_r)
	{
		filln = _strlen(n1) - _strlen(n2);
		_strncpy(n2, fillc, filln);
	}
	else if (_strlen(n1) < _strlen(n2) && _strlen(n2) < size_r)
	{
		filln = _strlen(n2) - _strlen(n1);
		_strncpy(n1, fillc, filln);
	}
	else if (_strlen(n1) == _strlen(n2) && _strlen(n1) < size_r)
	{
		for (i = _strlen(n1) - 1; n1[i] >= 0; i--)
		{
			sum[i] = ((n1[i] - 48) + (n2[i] - 48) + pend);
			if (sum[i] >= 9)
			{
				pend = sum[i] / 10;
				sum[i] = sum[i] % 10;
			}
			r[i] = sum[i] + 48;
		}
	}
	if (_strlen(r) < size_r)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}



char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}



int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
