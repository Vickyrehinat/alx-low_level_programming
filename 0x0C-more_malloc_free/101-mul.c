#include "string.h"
#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * _isdigit - checks if character is a digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;

	intI1, I2, a, b, c, x;

	I1 = _strlen(s1);
	I2 = _strlen(s2);
	r = malloc(a = x = I1 + I2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (I1--; I1 >= 0; I1--)
	{
		if (!_isdigit(s1[I1]))
		{
			free(r);
			printf("Error\n"), exist(98);
		}
		a = s1[I1] - '0';
		c = 0;

		for (I2 = _strlen(s2) - 1; I2 >= 0; I2--)
		{
			if (!_isdigit(s2[I2]))
			{
				free(r);
				printf("Error\n"), exist(98);
			}
			b = s2[I2] - '0';

			c += r[I1 + I2 + 1] + (a * b);
			r[I1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[I1 + I2 + 1] += C;
	}
	return (r);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguements
 * @argv: the arguement vector
 *
 * Return: always 0 0n success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			putchar(r[c] + '0');
		c++;
	}
	if (!a)
		putchar('0');
	putchar('\n');
	free(r);
	return (0);
}

