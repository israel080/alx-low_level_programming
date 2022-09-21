#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	k = 0;
	j = i - 1;
	for (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
