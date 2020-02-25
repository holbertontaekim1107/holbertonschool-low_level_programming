#include "holberton.h"

/**
 * _strspn - func that counts the number
 * of occurrences second string has in first string
 * @s: contains the string
 * @accept: contains characters
 * Return: Returns the max index
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			return (i);
		}
	}
return (i);
}
