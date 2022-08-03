#include "function_pointers.h"

/**
 * print_name - the function to print name
 * @name: name to be printed
 * @f: the function pointer
 * Return: Always 0 (successful)
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
