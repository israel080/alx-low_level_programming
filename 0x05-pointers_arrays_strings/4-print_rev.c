#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: this is to input string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)

		putchar(*(s + len));
	putchar(10);
}
