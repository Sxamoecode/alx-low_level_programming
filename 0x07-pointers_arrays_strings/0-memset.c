#include "main.h"

/**
 * The memset function fills the first
 * n byte of the memory area pointed to by s
 * with the constant byte c.
 *
 *@s: memory space to be filled
 @b: byte to fill with
 @n: number of spaces to fill

 * Return *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s); 
}
