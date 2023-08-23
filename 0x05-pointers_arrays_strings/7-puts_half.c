#include "main.h"
/**
 * puts_half - write every other character
 *
 * @str: pointer to string to print
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int count;

	while (*(str + len) != ('\0'))
	{
		len = len + 1;
	}
	if (len % 2 == 0)
	{
		count = (len / 2);
	}
	else
	{
		count = (len / 2) + 1;
	}

	while (count < len)
	{
		_putchar (*(str + count));
		count = count + 1;
	}
	_putchar ('\n');
}
