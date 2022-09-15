#include "main.h"

/**
 *_isalpha.c - function that checks for alphabetic character
 *
 * @c:int that we will use for the arguement of the function
 * Return: Always 0
 */

int _isalpha(int c)

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
