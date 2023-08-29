#include "main.h"

/**
 * _strchr- function to fetch character from a string
 *
 * @s: input string
 * @c: character to look for
 *
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	char *ptr = '\0';

	while (*s != '\0')
	{

		if (*s == c)
		{
			ptr = s;
			return (ptr);
		}
		s++;
	}
	return ('\0');
}
