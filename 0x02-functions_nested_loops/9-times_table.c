#include "main.h"
/**
 * times_table- function print times table
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int d1,d2;

	for (d2 =0;d2 <=9 ; d++)
	{
		for (d1 = 0; d1 <= 9; d1++)
		{
		d2 = d1 * 9;
		_putchar(d2 + 48);
		_putchar(44);
		_putchar(58);
		_putchar(d2 + 48);
		_putchar(d1 + 48);
		_putchar('\n');
		}
	}
		
	
}
