#include "holberton.h"

/**
* _isdigit - checks if input in ASCII is digit between 0-9.
* @c: input variable to check ASCII value
* Return -1 if digit, 0 if not a digit.
*/
int _isdigit(int c)
{
	return (c >= 47 && c <= 58 ? 1 : 0);
}
