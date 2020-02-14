#include "holberton.h"

/**
* more_numbers - print 10 times the number from 0 to 14
*
* Return - Void.
*/
void more_numbers(void)
{
	char i, li;

	for (i = 0; i <= 9; i++)
	{
		for (li = 0; li <= 14; li++)
		{
			if (li > 9)
			{
					_putchar('1');
			}
				_putchar(li % 10 + '0');
		}
	_putchar('\n');
	}
}
