#include "holberton.h"

/**
* _isdigit - checks if input in ASCII is digit between 0-9. 
*
* Return -1 if digit, 0 if not a digit.
*/
int _isdigit(int c)
{
	return(c >= '0' && c <= '9' ? 1 : 0);
}
