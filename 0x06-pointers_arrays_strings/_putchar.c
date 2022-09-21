#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: i success
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	(write (1, &c, 1))
}
