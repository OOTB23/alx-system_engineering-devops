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
	char *tmp;

        while (*(s + len) != ('\0'))
        {
                len = len + 1;
        }

       char *(tmp +( len + 1)) = ('\0');

        for (count = 0; count <= len; count++)
        {
                *(tmp + len - count) = *(s + count);
        }
        for (count = 0; count <= len; count++)
        {
                *(s + count) = *(tmp + count);
        }

	printf("%d \n", len);
	printf("%s \n", s);
    return (0);
}
