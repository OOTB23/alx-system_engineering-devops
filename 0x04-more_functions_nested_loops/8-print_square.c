#include "main.h"
/**
 * print_square- print square
 * @size: size of square
 *
 * Return: nothing
 *
 */
void print_square(int size)
{
	int x = size;
	int y = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (y > 0)
		{
			x = size;

			while (x > 0)
			{
				_putchar(35);
				x--;
			}

			_putchar('\n');
			y--;
		}
	}
}
