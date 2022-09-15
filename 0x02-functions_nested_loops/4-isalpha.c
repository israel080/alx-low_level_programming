#include "main.h"

/**
 *_isalpha.c - function to checks for alphabetic character
 *
 *@c:the character to print
 *
 *Return: Always 0
 *on fail -1 and errno is set appropriately
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
