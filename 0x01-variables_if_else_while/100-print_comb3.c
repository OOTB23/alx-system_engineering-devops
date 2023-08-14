#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: print possible different combinations of two digits
 *
 * Return: (0) Always success
 */

int main(void)
{
	int a = 0;
	int b = 1;

	for (; a < 9; a++)
	{
		b = a + 1;

		while ((b <= 9) && (b > a))
		{
			putchar(a + 48);
			putchar(b + 48);

			if (a == 8)
			{
				putchar('\n');
			}
			else
			{
				putchar(44);
				putchar(32);
			}

			b++;
		}
	}

return (0);

}
