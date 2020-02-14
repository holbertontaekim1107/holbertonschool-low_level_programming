#include "holberton.h"

/**
 * print_line - print line in the terminal as long as n is more than 0.
 * @n: length of line
 * Return - void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
