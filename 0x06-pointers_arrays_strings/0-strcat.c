#include "main.h"

/**
 * main - append src to dest
 *
 * Return - dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest = *src;
		dest++;
		src++;
	*dest = '\0';
	Return (s);
}
