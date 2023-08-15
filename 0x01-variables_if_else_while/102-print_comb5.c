#include <stdio.h>
/**
 * main - entery point
 * describtion: prints all possible combinations of two two-digits
 * Return: (0) Always success
 */
int main(void)
{
	int d1, d2, d3, d4 = 0;

	for (; d4 <= 9; d4++)
	{
		for (d3 = 0; d3 <= 9; d3++)
		{
			for (d2 = d4; d2 <= 9; d2++)
			{
				for (d1 = d3 + 1; d1 <= 9; d1++)
				{
					if ((d1 == d3) && (d2 == d4))
					{}
					else
					{
						putchar(d4 + 48);
						putchar(d3 + 48);
						putchar(32);
						putchar(d2 + 48);
						putchar(d1 + 48);
					if ((d3 == 8) && (d4 == 9))
						putchar('\n');
					else
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
return (0);
}
