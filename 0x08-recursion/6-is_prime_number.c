#include "holberton.h"

/**
 *check - 2nd function for prime number
 *@n: number
 *@c: counter
 *Return: check
 */
int check(int n, int c)
{
	if (n % c == 0)
		return (0);
	if (c > (n / 2))
		return (1);
	return (check(n, ++c));
}

/**
 * is_prime_number - checks for prime number
 * @n: number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	return (check(n, 3));
}
