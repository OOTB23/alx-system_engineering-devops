#include "main.h"

/**
 * print_most_nuumbers - writes the number 0-9 but 2,4
 *
 * Return: nothing.
 *
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar(ch + 48);
	}
	_putchar('\n');
}
