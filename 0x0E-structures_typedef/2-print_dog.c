#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the dog struct
 * @d: pointer to variables
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)

		return;

	if (d->name == NULL)

		d->name = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
