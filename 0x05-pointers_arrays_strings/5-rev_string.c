#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input string
 * Return: return string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0
		int i;

	while (s[counter] != '\n')
		counter++;
	for (i = 0; i < counter; 1++)
	{
		counter--;
		rev = s[1];
		s[1] = s[counter];
		s[counter] = rev;
	}
}
