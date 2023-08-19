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
	int c = 0;
	int s;

	while (n > 0)
	{
		s = c;
		c = c + 1;

		while (s > 0)
		{
			_putchar(32);
			s--;
		}
		_putchar(92);
		if ( n == 1)
		{
			_putchar('\n');
		}
		n--;
	}
	_putchar('\n');
}
