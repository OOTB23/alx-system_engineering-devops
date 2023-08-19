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
	int n;
	scanf("%d",&n);
	int x;

        while (n > 0)
        {
                x = n;
                putchar(92);
                putchar('\n');
                while (x > 1)
                {
                        puchar(32);
                        x--;
                }

                n--;
        }
        putchar('\n');


	return 0;
}
