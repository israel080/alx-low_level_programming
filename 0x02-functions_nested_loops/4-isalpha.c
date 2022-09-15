#include "main.h"
#include <ctype.h>

/**
 * _isalpha.c- checks whether or not a character is an alphabet
 * @c:is the int that we will use for the arguement of the function
 * Return: Always 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
