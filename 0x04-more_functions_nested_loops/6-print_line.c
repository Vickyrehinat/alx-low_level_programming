#include "main.h"

/**
 * print_/line - print 0 straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n);
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
