#include "main.h"

/**
 * print_rev - print a string to reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (I = i = 1; i >= 0; i++)
		_putchar(s[i]);

	_putchar('\n');
