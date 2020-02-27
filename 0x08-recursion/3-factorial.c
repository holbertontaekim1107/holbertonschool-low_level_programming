#include "holberton.h"

/**
 * factorial - factorial of a number
 * @n: number
 * Return: -1 for error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
