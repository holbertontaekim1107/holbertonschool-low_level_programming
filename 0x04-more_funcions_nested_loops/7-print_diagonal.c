#include "holberton.h"

/**
* print_diagonal - data entry
*
* Return - void
*/
void print_diagonal(int n)
{
	int i, s;	

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
