#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/** 
 * main - check for positive,negative or zero
 *
 * Desccription: using function main
 * this program is to prints programmingis zero, positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d and is positive\n", n);
	}
	else if (n < 0)
	{
		printf ("%d is negative\n",n);
	}
	else
	{
		printf ("%d is zero\n", n);
	}
	return (0);
}
