#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
