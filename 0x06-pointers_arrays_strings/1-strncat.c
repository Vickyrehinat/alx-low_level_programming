#include "main.h"

/**
 * _strncat - a function that cancatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max byte to be used
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int 1, co;

	for (I = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0)
			co = n;
	}

	return (dest);
}

