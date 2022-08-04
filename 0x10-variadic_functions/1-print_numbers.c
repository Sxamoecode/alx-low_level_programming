#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: char to separate integers
 * @n: the constant int
 *
 * Return: Nothing (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && *separator != '\0')
			printf("%c ", *separator);
	}
	putchar('\n');
	va_end(ap);
}
