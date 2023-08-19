#include "main.h"
/**
 * print_diagonal- print line in terminal
 * @n: number of / to form the line
 *
 * Return: nothing
 *
 */
void print_diagonal(int n)
{
	int x;

	while (n > 0)
	{
		x = n;
		_putchar(92);
		_putchar('\n');
		while (x > 1)
		{
			_puchar(32);
			x--
		}

		n--;
	}
	_putchar('\n');
}
