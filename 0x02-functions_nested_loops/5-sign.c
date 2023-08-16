#include "main.h"
/**
 * print_sign- function indicate positive or negative number
 * @n: The number to check case
 * Return: (1)- if positive , (0) - if zero , (-1) if negative
 *
 */
int print_sign(int n)
{

	int r;

	if (n > 0)
	{
		r = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		r = -1;
		_putchar(45);
	}
	else
	{
		r = 0;
		_putchar(48);
	}

	return (r);
}
