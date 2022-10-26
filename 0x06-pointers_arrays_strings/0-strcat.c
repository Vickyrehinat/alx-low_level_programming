#include "main.h"

/**
 * _strcat - concantenate two strings
 * @dest: copy to
 * @src: reply from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	I = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (stc[j] != '\0')
	{
		dest[i] = stc[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
