#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - checks to see if malloc is returning null
 * @b: unsigned int from main
 * Return: if malloc fails, returns 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *checker;

	checker = malloc(b);

	if (checker == NULL)
	{
		exit(98);
	}
return (checker);
}
