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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

return (0);

}
