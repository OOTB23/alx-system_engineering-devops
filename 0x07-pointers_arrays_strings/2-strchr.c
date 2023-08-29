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
	char *ptr;

	while (*s != '\0')
	{

		if (*s == c)
		{
			ptr = s;
			break;
		}
		s++;
	}
	return (ptr);
}
