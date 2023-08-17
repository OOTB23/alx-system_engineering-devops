#include "main.h"
/**
 * jack_bauer- print every minute
 *
 * Return: nothing
 *
 */

void jack_bauer(void)
{
	int d1, d2, d3, d4 = 0;

	for (; d4 <= 2; d4++)
	{
		for (d3 = 0; d3 <= 9; d3++)
		{
			if ((d4 == 2) && (d3 == 4))
			{
				break;
			}
			else
			{
				for (d2 = 0; d2 <= 5; d2++)
				{
					for (d1 = 0; d1 <= 9; d1++)
					{
					_putchar(d4 + 48);
					_putchar(d3 + 48);
					_putchar(58);
					_putchar(d2 + 48);
					_putchar(d1 + 48);
					_putchar('\n');
					}
				}
			}
		}
	}
}
