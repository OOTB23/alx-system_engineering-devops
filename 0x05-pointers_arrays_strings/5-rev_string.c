#include "main.h"
/**
 * rev_string - write string in reverse
 *
 * @s: pointer to string to reverse
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int count;
	char tmp;

	while (*(s + len) != ('\0'))
	{
		len = len + 1;
	}

	for (count = 0; count < len / 2; count++)
	{
		tmp = *(s + count);
		*(s + count) = *(s + len - 1 + count);
		*(s + len - 1 + count) = tmp;
	}
}
