#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(chachar *s)
{
	int i = 0, j;
	char a[] = " \t\n,;,!?\"(){}";

	while (*(s + i))
	{
	
	
		if (*(s + i) >= 'a' && *(a + i) <= 'z')B
		 
			if (i == 0) *(s + i) -= 'a' - 'A';
	
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(a + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
