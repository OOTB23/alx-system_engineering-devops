#include "main.h"

/**
 * more_numbers - writes the alphabet 10 times
 *
 * Return: nothing.
 *
 */
void more_numbers(void)
{
	int ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch <= 9)
			{
				_putchar(ch + 48);
			}
			else
			{
				_putchar(49);
				_putchar((ch - 10) + 48);
			}
		}
		_putchar('\n');
		i++;
	}

}
