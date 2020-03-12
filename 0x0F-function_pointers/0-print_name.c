#include "function_pointers.h"
/**
 * print_name - printing name
 * @name: name
 * @f: The function that is being called
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		if (name)
			f(name);
		else
			f("");
	}
}
