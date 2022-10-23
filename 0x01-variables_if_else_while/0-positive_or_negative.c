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
	/** your code goes here*/
	if (n > 0)
		printf("%d is posiive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
