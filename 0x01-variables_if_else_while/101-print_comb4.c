#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: print possible different combinations of three digits
 *
 * Return: (0) Always success
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	for (; a < 8; a++)
	{
		b = a + 1;

		for (; b < 9; b++)
		{
			c = b + 1;
			while ((c <= 9) && (b > a) && (c > b))
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);

				if (a == 7)
				{
					putchar('\n');
				}
				else
				{
					putchar(44);
					putchar(32);
				}

				c++;
			}
		}
	}

	return (0);

}
