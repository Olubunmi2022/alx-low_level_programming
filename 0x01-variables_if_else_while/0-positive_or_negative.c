#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is posiive\n", );
	}
	else if (n == 0)
	{
		printf("%d is zero\n", );
	}
	else if (n < 0)
	{
		printf("%d is negative\n",);
	}
	return (0);
}