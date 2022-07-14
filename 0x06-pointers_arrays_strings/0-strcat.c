#include "main.h"

/**
 * main - append src to dest
 *
 * Return - dest
 */
char *_strcat(char *dest, char *src)
{
	/*char *s = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest = *src;
		dest++;
		src++;
	*dest = '\0';
	return (s);*/
	char dest[], s;
	char src[], *s;
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);
	s = dest[];
	for(i=0; i<=len2; i++)
		dest[len1 + 1] = src[i];
	printf("%s", dest);
	return (*s)
}
