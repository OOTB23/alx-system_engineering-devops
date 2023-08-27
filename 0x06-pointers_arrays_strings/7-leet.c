#include "main.h"

/**
 * leet- function to convert to leet tping
 *
 * @s: input string
 *
 * Return: string after change
 */
char *leet(char *s)
{
	int c = 0;
	int i;
	char leetarr[][] = {{97, 65, 52}, {101, 9, 51}, {111, 79, 48}, {116, 84, 55}, {108, 76, 49}};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5 ; i++)
		{
			if (s[c] == leetarr[i][0] || s[c] == leetarr[i][1])
			{
				s[c] = leetarr[i][2];
			}
		}
		c++;
	}

	return (s);
}
