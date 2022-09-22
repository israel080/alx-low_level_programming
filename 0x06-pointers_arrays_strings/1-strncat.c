#include "main.h"
#include <string.h>

/**                                                              
 *_strncat -  function that concatenates two strings
 *@dest: first parameter
 *@src: second param
 *@n: third parameter
 *Return: string
 */

char *_strncat(char *dest, char *src, int n);
{                                                                              
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while  (j < n && src[j]);
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}          
