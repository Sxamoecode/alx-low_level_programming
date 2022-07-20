#include "main.h"

/**
 * factorial - used to find the factorial of a number
 * @n: number
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
