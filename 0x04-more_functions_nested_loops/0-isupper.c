#include "sam.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	if((c >= 65) && (c <= 90))
	{	
	printf("%c: %d\n", c, _isupper(c));
	return(1)
	}
	else
	{
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
	}
}
