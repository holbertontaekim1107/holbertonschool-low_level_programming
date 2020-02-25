#include "holberton.h"

/**
 * set_string - points the pointer to another pointer
 * @s: is a double pointer
 * @to: what we need to have save in s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
