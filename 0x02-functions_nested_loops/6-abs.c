#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: integer whose absolute value to find
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
