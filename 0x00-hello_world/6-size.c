#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	long int e;

	printf("Size of a char: %c byte(s)\n", sizeof(a));
	printf("Size of a int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %1d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %11d byte(s)\n", sizeof(d));
	printf("Size of a long float: %d byte(s)\n", sizeof(e));
	return (0);
}
