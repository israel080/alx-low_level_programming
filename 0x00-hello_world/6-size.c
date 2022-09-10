#include <stdio.h>

/**
 * main -in output in 32-bit and 64-bit gcc
 *
 * Return: Always 0 (Success)
 */
int main()
{
	short a;
	int b;
	long int c;
	long long int d;
	long int e;

	printf("Size of a short: %d bytes\n", sizeof(a));
	printf("Size of a int: %d bytes\n", sizeof(b));
	printf("Size of a long int: %d byte(\n", sizeof(c));
	printf("Size of a long long int: %d bytes\n", sizeof(d));
	printf("Size of a long float: %d bytes\n", sizeof(e));
	return (0);
}
