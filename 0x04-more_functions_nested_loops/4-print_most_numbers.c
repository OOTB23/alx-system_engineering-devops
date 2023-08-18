#include "main.h"

/**
 * print_most_numbers - writes the number 0-9 but not 2 or 4
 *
 * describtion: function that print alphabit
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch == 2 || ch == 4)
		{
		}
		else
		{
			_putchar(ch + 48);
		}
	}
	putchar('\n');

}
