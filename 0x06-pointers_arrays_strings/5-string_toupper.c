##include "main.h"

/**
 * string_toupper - function that changes all lower string to upper
 * @n: input string
 * Return: capitalized string
 */
char *string_toupper(change *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
