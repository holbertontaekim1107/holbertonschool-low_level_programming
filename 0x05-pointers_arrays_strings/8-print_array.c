#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints all the array side by side
 *
 * @a: Value of input array
 * @n: Value of integer
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		count++;
		if (count != n)
			printf(", ");
	}
	printf("\n");
}
