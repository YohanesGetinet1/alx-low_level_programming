#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all of its parameters
 *@n: number of variable arguments passed
 *
 *Return: the sum if successful, 0 if n = 0
 */


int sum_them_all(const unsigned int n, ...)

{

va_list sumlist;

unsigned int i = 0;

int sum = 0;

	va_start(sumlist, n);

		if (n == 0)

		return (0);

		while (i < n)
	{
		sum += va_arg(sumlist, int);
		i++;
	}
		va_end(sumlist);
		return (sum);
}
