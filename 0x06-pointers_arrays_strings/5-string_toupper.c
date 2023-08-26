#include "main.h"

/**
 * *string_toupper- function to change lowe to uppoer case
 *
 * @s: input string
 *
 * Return: string with case changed
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] <= 122)
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
