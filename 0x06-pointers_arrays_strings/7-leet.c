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

	while (s[c] != '\0')
	{
		if (s[c] == 97 || s[c] == 65)
		{
			s[c] = (4 + 48);
		}
		else if (s[c] == 101 || s[c] == 69)
		{
			s[c] = (3 + 48);
		}
		else if (s[c] == 111 || s[c] == 79)
		{
			s[c] = (48);
		}
		else if (s[c] == 116 || s[c] == 84)
		{
			s[c] = (7 + 48);
		}
		else if (s[c] == 108 || s[c] == 76)
		{
			s[c] = (1 + 48);
		}
		c++;
	}

	return (s);
}
