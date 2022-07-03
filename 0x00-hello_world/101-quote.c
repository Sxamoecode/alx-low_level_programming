#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\n - Dora Korpar, 2015-10-19";
	write(2, qoute, sizeof(quote) - 1);

	return (1);
}
