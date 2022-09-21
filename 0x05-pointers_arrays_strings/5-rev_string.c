#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input string
 * Return: return string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int 1;

	while (s[counter] != '\n')
		counter++;
	for (1 = 0; 1 < counter; 1++)
	{
		counter--;
		rev = s[1];
		s[1] = s[counter];
		s[counter] = rev;
	}
}
