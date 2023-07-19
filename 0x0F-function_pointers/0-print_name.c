#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: char
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
