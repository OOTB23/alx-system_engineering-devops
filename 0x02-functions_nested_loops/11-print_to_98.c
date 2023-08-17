#include "main.h"

/**
 * print_to_98- function count to 98
 * @n: The number to count from
 * Return: nothing
 *
 */
void print_to_98(int n)
{

	int l;

	if (n >= 98)
	{
		l = n - 98;
		while (l >= 0)
		{
			_putchar(n + 48);
			_putchar(44);
			_putchar(32);
			n--;
			l--;
		}
		_putchar('\n');
	}
	else if ((n < 98) && (n > 0))
	{
		l = 98 - n;
		while (l >= 0)
		{	_putchar(n + 48);
			_putchar(44);
			_putchar(32);
			n++;
			l--;
		}
		_putchar('\n');
	}
	else
	{
		l = ((-1 * n) + 98);
		while (l >= 0)
		{
			if (n < 0)
			{
				_putchar(45);
				_putchar((-1 * n) + 48);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(n + 48);
				_putchar(44);
				_putchar(32);
			}
			n++;
			l--;
		}
		_putchar('\n');
	}
}
