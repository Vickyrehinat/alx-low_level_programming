#include "stdio.h'
#include "stdlib.h"
#include "main.h"
/**
* main - entry point
* @argc: arguements
* argv: array pointing to arguements
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 10)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	retun (0);
}
