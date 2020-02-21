#include "holberton.h"

/**
 * _strcat - returns two catted strings
 * @dest: contains the string "Hello "
 * @src: contains the string "World!\n"
 * Return: Returns catted string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = _strlen(dest);
	int i;

	for (i = 0; i <= destlen; i++)
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
