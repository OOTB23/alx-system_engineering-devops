#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: function that print alphabit in lower then upper case
 *
 * Return: (0) Always success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);

}
