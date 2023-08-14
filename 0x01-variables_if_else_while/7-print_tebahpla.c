#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: function that print alphabit reversed
 *
 * Return: (0) Always success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

return (0);

}
