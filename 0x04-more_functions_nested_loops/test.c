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
	    int c = 0;
        int s;
	int n;
	scanf("%d",&n);
        while (n > 0)
        {
                s = c;
                c = c + 1;

                while (s > 0)
                {
                        putchar(32);
                        s--;
                }
                putchar(92);
                if (n > 1)
                {
                        putchar('\n');
                }
                n--;
        }
        putchar('\n');
	return 0;
}
