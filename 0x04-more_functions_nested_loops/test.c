#include "main.h"
#include <stdio.h>

/**
 * more_numbers - writes the alphabet 10 times
 *
 * Return: nothing.
 *
 */

int main(void)
{
/*void more_numbers(void)
{*/
	int ch;
        int i = 0;
	int x;
	scanf("%d",&x);
	printf ("%d",(x % 10));
	putchar('\n');
        while (i < 10)
        {
                for (ch = 0; ch <= 14; ch++)
                {
                        if (ch > 9)
			{
				putchar(49);
			}
			putchar((ch % 10) + 48);
                }

                putchar('\n');
                i++;
        }
	return 0;
}
