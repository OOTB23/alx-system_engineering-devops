#include "main.h"

/**
 * print_most_nuumbers- function print the number 0-9 but 2 4
 *
 * Description: function to print numbers from 0-9 but 2 4
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
