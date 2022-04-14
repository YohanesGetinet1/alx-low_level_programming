#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - prints all
 *@format: constant
 *Return: void
 */

void print_all(const char * const format, ...)

{
	unsigned int i = 0;
		va_list printList;
		char *str;

		va_start(printList, format);

		while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':

			printf("%c", va_arg(printList, int));

			break;

			case 'i':

			printf("%d", va_arg(printList, int));

			break;

			case 'f':

			printf("%f", (float)va_arg(printList, double));

			break;

			case 's':

			str = va_arg(printList, char *);

			if (str == NULL)

			{
				str = "(nil)";
			}

			printf("%s", str);

			break;

			default:
				continue;
			}
			if (format[i])
			{
			printf(", ");
			}
	}
			printf("\n");
			va_end(printList);
}
