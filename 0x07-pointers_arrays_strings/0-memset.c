#include "holberton.h"
/**
 * _memset - takes value from pointer s and replaces with values from b
 * @b: var that needs to be replaced
 * @n: number of bytes/characters to be reassigned
 * @s: pointer contains value stored in s.
 * Return: Returns new value to pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *o = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
return (o);
}
