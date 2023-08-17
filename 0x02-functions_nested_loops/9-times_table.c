#include "main.h"
/**
 * times_table- function print times table
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int d1, d2, d3;

	for (d2 = 0; d2 <= 9 ; d2++)
	{
		for (d1 = 0; d1 <= 9; d1++)
		{
			d3 = d1 * d2;
			_putchar(d3 + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
