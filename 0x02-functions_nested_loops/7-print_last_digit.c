#include "main.h"

/**
 * print_last_digit- function print the last digit
 * @n: The number present the last digit
 * Return: (int r)- last digit
 *
 */
int print_last_digit(int n)
{

	int r;
	int a;
	
	r = (n % 10);
	a = _abs(r);
	_putchar(a + 48);

	return (r);
}
