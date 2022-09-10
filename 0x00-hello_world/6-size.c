#include <stdio.h>

/**
 * main - print the sizeof of many vartypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short a;
	int b;
	long int c;
	long long int d;
	long int e;

	printf("Size of a short = %d byte(s)\n", sizeof(a));
	printf("Size of a int = %d byte(s)\n", sizeof(b));
	printf("Size of a long int = %d byte(s)\n", sizeof(c));
	printf("Size of a long long int = %d byte(s)\n", sizeof(d));
	printf("Size of a long float = %d byte(s)\n", sizeof(e));
	return (0);
}
