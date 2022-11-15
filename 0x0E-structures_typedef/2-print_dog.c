#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints a struct dog.
 * @d: the struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age <= 0)
		printf("Age: (nil)\n");

	if (d->owner == NULL)
		d->Owner = "(nil)";

	printf("NAME: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

