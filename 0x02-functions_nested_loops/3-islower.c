#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: is the int that will be use for the argument of the function
 * Return 0
 */

int _islower(int c)(void)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
