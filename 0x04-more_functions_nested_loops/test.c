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
	int size;
	scanf("%d",&size);
	int x = size;
        int y = size;

        if (size <= 0)
        {
                putchar('\n');
        }
        else
        {
                while (y > 0)
                {
                        x = size;
			while (x > 0)
                        {
                                putchar(35);
                                x--;
                        }

                        putchar('\n');
                        y--;
                }
        }
	return 0;
}
