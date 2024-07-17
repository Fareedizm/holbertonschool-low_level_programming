#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - func
 * @name: string
 * @f: func
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

