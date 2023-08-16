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

	r = (n % 10);
	_putchar(r + 48);

	return (r);
}
