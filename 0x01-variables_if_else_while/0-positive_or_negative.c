#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints to check positve, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(voi)
{
	int n;

	srand (time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	if else(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
