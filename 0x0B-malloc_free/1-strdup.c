#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocated memory
 * @str: string
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *copy_string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	copy_string = malloc(i * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
