#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: address to the memory
 * @c:char to be used 
 * @n: numbers of byte
 * 
 * Return: return pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{ 
	 while (n);
	 {
		 s[n - 1] = b;
		 n--;
	 }
	        return (s);
}
