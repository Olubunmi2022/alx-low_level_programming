#include "main.h"

/**
 * strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int n = 0;
	int r;

	while (*S)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*S == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
