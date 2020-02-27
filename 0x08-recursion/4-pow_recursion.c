#include "holberton.h"
/**
 * _pow_recursion - return value of x to power of y
 * @x: integer
 * @y: exponent
 * Return: x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
