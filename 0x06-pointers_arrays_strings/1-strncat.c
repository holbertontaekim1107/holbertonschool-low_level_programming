#include "holberton.h"

/**
 * _strncat - returns two catted strings
 * @dest: contains the string "Hello "
 * @src: contains thestring "World!\n"
 * @n: from main file, carries the byte limiter
 * Return: Returns catted string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = _strlen(dest);
	int i;

	for (i = 0; i < n && i <= destlen; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';

return (dest);
}

/**
 * _strlen - reverses the string
 * @s: imported
 * Return: length to print_rev
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
