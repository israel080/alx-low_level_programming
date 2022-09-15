#include "main.h"

/**
 * _isalpha.c- checks whether or not a character is an alphabet
 * @c:is the int that we will use for the arguement of the function
 * Return: return 0 or 1 depending on the condition
 */
int _isalpha(int c);
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
