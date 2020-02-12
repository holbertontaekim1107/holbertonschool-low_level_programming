#include "holberton.h"

/**
 * print_times_table - print times table of size n
 *
 * @n: input times table size
 */
void print_times_table(int n)
{
	int o, t, ot, ot1, ot2, ot3;

	if (!(n > 15 || n < 0))
	{
		o = 0;
		while (o <= n)
		{
			t = 0;
			while (t <= n)
			{
				ot = o * t;
				ot1 = ot / 100;
				ot2 = (ot / 10) % 10;
				ot3 = ot % 10;
				if (t == 0)
					_putchar('0');
				else
				{
					if (ot1 == 0)
						_putchar(' ');
					else
						_putchar(ot1 + '0');
					if (ot1 == 0 && ot2 == 0)
						_putchar(' ');
					else
						_putchar(ot2 + '0');
					_putchar(ot3 + '0');
				}
				if (t < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				t++;
			}
			_putchar('\n');
			o++;
		}
	}
}
