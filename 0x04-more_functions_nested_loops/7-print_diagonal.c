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

	while (n > 0)
	{
		if (n == 1)
		{
			_putchar(92);
			break;
		}
			_putchar(92);
			_putchar('\n');
			_putchar(32);
			n--;
	}
	_putchar('\n');
}
