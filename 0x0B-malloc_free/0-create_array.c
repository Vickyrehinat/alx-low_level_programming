#include "main.h"
#include "stdlib.h"
/**
 * create array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * description: create array of size size and assign char c
 * Return: pointer to array, Null if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (Null);

	array = (char *)malloc(sizeof(char) * size);
	if (array == Null)
		return (Null);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
