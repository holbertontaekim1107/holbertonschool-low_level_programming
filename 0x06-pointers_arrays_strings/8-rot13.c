#include "holberton.h"

/**
 * rot13 - replaces characters in rot13
 * @l: pointer string importing from main
 * Return: Returns final value
 */

char *rot13(char *l)
{
	char l33t[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char real[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (l[i] == real[j])
			{
				l[i] = l33t[j];
				break;
			}
		}
	}
return (l);
}
