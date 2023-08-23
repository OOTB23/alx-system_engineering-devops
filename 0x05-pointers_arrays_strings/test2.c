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
    char cc;

    char *s;
	s = "hello";
        int len = 0;
        int count;
	int tcount;
        while (*(s + len) != ('\0'))
        {
		printf("%c %d \n", *(s + len), len);
		len = len + 1;
        }
	printf("%s %d \n", s, len);
	

	  for (count = 0; count < len / 2; count++)
        {
                tcount = len - (count + 1);
		c  = *(s + count);
		cc = *(s + tcount);
		s[tcount] = c;
        }
	
/*	printf("%c \n", *(s + tcount));*/

	     /*  for (count = 0; count < len; count++)
        {
                *(s + count) = tmp[count];
        }
*/
    return (0);
}
