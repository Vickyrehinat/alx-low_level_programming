#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: Another pointer argument
 * Return: Always (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
