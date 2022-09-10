#include <stdio.h>

/**
 * main - print the size of different variable types
 *
 * Return: Always 0 (Successfull)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	long int e;

	printf("Size of a char: %d 4byte(s)\n",sizeof(a));
	printf("Size of a int: %d 4byte(s)\n",sizeof(b));
	printf("Size of a long int: %d 4byte(s)\n",sizeof(c));
	printf("Size of a long long int: %d 8byte(s)\n",sizeof(d));
	printf("Size of a long float: %d 4byte(s)\n",sizeof(e));
	return (0);
}
