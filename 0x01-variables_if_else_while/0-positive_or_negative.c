#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * main - print if the number is zero, positive or negative
 *
 * Desccription: using function main
 * this program is to prints programmingis zero, positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d and is positive", n);
	}
	else if (n<0)
	{
		printf ("%d is negative",n);
	}
	else
	{
		printf ("%d is zero", n);
	}
	return (0);
}
