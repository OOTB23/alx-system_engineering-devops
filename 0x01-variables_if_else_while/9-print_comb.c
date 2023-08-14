#include <stdio.h>

/**
 * main - entery point
 *
 * describtion: count from 0 to 9 with speical format
 *
 * Return: (0) Always success
 */

int main(void)
{
	int c = 48;

	do {
		putchar(c);
		putchar(44);
		putchar(32);
		c++;
	} while (c < 57);

	putchar(57);

return (0);

}
