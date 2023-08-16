#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet 10 times
 *
 * Return: nothing.
 *
 */
void print_alphabet(void)
{
	char ch;
	int i = 0;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}

}
