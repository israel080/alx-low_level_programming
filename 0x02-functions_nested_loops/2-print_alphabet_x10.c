#include "main.h"

/**
 * printalphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c; 
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = 'a'; c <= 'z'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

