#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * end of the string pointed @dest
 * @dest: destination
 * @src: the source string
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0'i;
	return (dest);
}
