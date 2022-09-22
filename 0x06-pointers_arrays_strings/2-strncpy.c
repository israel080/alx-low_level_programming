#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strncpy - function for copying purpose
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest[20] = "C program";
	char *src[20];

	strcpy(dest, src);

	puts(dest);
	return (dest);
}
