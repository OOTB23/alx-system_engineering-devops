#include "main.h"
/**
 * print_line- print line in terminal
 * @n: number of - to form the line
 *
 * Return: nothing
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
