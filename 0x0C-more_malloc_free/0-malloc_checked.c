#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * malloc_checked - entry point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exist(98);
	return (n);
}
