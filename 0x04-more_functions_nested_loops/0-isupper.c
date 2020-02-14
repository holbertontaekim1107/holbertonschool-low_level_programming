#include "holberton.h"

/**
* _isupper - checks if the input integer's ascii value is uppercase
* @c: varoable imported from main.c
* Return: 1 if alpha is upper, 0 if alpha lower
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
