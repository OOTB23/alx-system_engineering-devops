#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * print_triangle- print triangle
 * @size: size of square
 *
 * Return: nothing
 *
 */
int main(void)
{

    char c;

    char *s;
    s = "hello";
    int len = 0;
        int count;

        while (*(s + len) != ('\0'))
        {
                len = len + 1;
        }
        for (count = 1; count < len; count++)
        {
                putchar(*(s + (len - count)));
        }
	
    return (0);
}
