#include <stdio.h>
#include "function_pointers.h"

**
 * print_name - print the name of input string with input function
 * @name: input name string
 * @f: pointer to function to print string
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
