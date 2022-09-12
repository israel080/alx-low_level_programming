#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * main - print if the number is zero, positive or negative
 *
 * Desccription: using function main
 * this program is to prints programmingis zero, positive or negative
 * Return 0
 */
int main(void)
{
	int n;
	int 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;
	/* Input number from user */
	if (1 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf ("last digit of %d is %d and is 0\n",n, 0);
	}
	else
	{
		printf ("last digit of %d is %d and is less than 6 and not 0\n", n, 1);
	}
	return (0);
}
