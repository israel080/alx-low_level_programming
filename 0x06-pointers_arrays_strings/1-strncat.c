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
	char *desk = "Hello";
	char *src = "World";

	strncat(dest, src, n);
	return (dest);
}          