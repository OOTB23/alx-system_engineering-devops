#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: function that print alphabit
 *
 * Return: (0) Always success
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}

return (0);

}
