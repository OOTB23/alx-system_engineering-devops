#include "main.h"
#include <stdio.h>
/**
 * print_triangle- print triangle
 * @size: size of square
 *
 * Return: nothing
 *
 */
int main(void)
{
	int size;
	scanf("%d", &size);
	int x = size;
	int y = size;
	int l = 1;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (y > 0)
		{
			x = size;
			
			while (x > 0)
			{
				if (l >=  size)
				{
					putchar(35);
				}
				else
				{
					putchar(32);
				}
				x--;
				l++;
			}

			putchar('\n');
			y--;
		}

	}
	return (0);
}
