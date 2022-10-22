#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *@c: the character to print
 Return: do sucess 1 else -1
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
