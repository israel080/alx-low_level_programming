#include "main.h"

/**
 * main -function that prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; c <= 'z'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

