#include "unistd.h"

/**
 * _putchar - writes thhe character c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1.
 * on error, -1 is returned, and errno is a set appriopriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
