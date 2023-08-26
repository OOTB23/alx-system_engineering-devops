#include "main.h"

int issep(char c);
/**
 * cap_string- function to capitalize words
 *
 * issep- function to determin seprators
 *
 * @s: input string
 *
 * Return: string with case changed
 */
char *cap_string(char *s)
{
	int c = 0;
	int sep = 1;

	do {
		if ((s[c] >= 97 && s[c] <= 122) && sep)
		{
			s[c] = s[c] - 32;
			sep = 0;
		}
		else
		{
			sep = issep(s[c]);
		}
		c++;
	} while (s[c] != '\0');

	return (s);
}

/**
 * issep- functio to determine speerators
 *
 * @c: character to check
 *
 * Return: return sep int
 */

int issep(char c)
{
	int i;
	int sep;
	char separr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; i < 13; i++)
	{
		if (c == separr[i])
		{
			sep = 1;
			break;
		}
		else
		{
			sep = 0;
		}
	}
	return (sep);
}
