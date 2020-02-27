#include "holberton.h"

/**
 *check - checker function
 *@n: number
 *@c: integer for count
 *Return: complete square
 */
int check(int n, int c)
{
	int equal;

	equal = c * c;
	if (n - equal == 0)
		return (c);
	else if (n < equal)
		return (-1);
	return (check(n, ++c));
}

/**
 * _sqrt_recursion - natural square of root #
 * @n: number
 * Return: -1 if no natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (check(n, 2));
}

