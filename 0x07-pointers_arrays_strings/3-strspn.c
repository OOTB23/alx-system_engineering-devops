#include "main.h"

/**
 * _strspn- function to fetch substring from a string
 *
 * @s: input string
 * @accept: substring to look for
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int c;

	for (c = 0; s[c] != '\0'; i++)
	{
		for (i = 0; accept[i] != s[i]; i++)
		{
		/*	if (accept[i] == '\0')*/
			{
				return (c);
			}
		}
	}
	return (c);
}
