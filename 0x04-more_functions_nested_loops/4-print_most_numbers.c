#include "main.h"

/**
 * print_most_numbers - writes most of the number 0-9
 *
 * Return: nothing.
 *
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch == 2 || ch == 4)
		{
			continue;
		}
		else
		{
			_putchar(ch + 48);
		}
	}
	_putchar('\n');
}
