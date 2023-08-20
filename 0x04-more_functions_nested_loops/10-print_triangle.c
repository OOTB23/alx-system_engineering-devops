#include "main.h"
/**
 * print_triangle- print triangle
 * @size: size of square
 *
 * Return: nothing
 *
 */
void print_triangle(int size)
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
				if (x < y)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
				x--;
			}

			_putchar('\n');
			y--;
		}
	}
}
