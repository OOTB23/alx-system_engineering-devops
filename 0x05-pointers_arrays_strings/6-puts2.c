#include "main.h"
/**
 * puts2 - write every other character
 *
 * @s: pointer to string to print
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int len = 0;
	int count = 0;

	while (*(s + len) != ('\0'))
	{
		len = len + 1;
	}

	while (count < len)
	{
		_putchar(*s + count);
		count = count + 2;
	}
}
