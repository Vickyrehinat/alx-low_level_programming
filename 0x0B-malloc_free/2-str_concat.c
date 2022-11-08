#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * str_concat - get end of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of 1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		S1 = S2 = "";

	for (end1 = 0; end1 <= *s1; end1++)
	{
	}

	for (end2 = 0; end2 <= *s2; end2++)
	{
	}

	array = malloc(sizeof(char) * (end1 + end2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
