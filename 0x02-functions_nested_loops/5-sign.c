#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: character to print positive, zero or negarive integer
 *Return: 1
 *describe: if it's positive, 0 if it's negative and -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
