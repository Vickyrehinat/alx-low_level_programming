#include "main.h"

/**
 * _strncat - joins two strings with a byte
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * @Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[I + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
