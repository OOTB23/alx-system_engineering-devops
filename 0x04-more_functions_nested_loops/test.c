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
	while (n > 0)
        {
                if (n == 1)
                {
                        putchar(92);
                }
                else
                {
                        putchar(92);
                        putchar('\n');
                        putchar(32);
                }
                n--;
        }
        putchar('\n');


	return 0;
}
