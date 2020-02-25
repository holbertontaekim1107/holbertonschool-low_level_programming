#include "holberton.h"

/**
 * _memcpy - copies src to dest
 * @n: limits the amount of bytes and/or char to copy
 * @src: bytes to copy
 * @dest: final output copied from src
 * Return: Returns new value to pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;

	while (n > 0)
	{
		dest[index] = src[index];
		index++;
		n--;
	}

return (dest);
}
