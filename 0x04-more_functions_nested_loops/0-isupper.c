#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	if(isupper(c))
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
