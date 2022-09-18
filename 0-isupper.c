#include "main.h"

/**
 * _isupper - check if letter is upper case
 * @d: the value to be checked
 * Return: return 1 for upper letter or 0 for any other
 */

int _isupper(int d)
{
	if (d <= 65 && d >= 90)
		{
			return (1);
		}

	return (0);
}
