#include "main.h"
#include <ctype.h>

/**
 * _isalpha.c- checks whether or not a character is an alphabet
 * @c:is the int that we will use for the arguement of the function
 * Return: Always 0
 *
 */
int _isalpha(int C)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

