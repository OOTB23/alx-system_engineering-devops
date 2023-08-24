#include "main.h"
/**
 * _atoi - write string in reverse
 *
 * @s: string to get in from
 *
 * Return: 0 if string have no number , int with number value
 */

int _atoi(char *s)
{
	int len = 0;
	int ndig = 0;
	int ns = 0;
	int count;
	char *c;
	int result = 0;

	c = s;
	while (*(s + len) != ('\0'))
	{
		if (*(s + len) > '0' && *(s + len) < '9')
		{
			*(++c) = *(s + len);
			ndig = ndig + 1;
		}
		if (*(s + len) == '-')
		{
			ns = ns + 1;
		}
	}

	for (count = 0; count <= ndig; count++)
	{
		result = (*(c + count) * (count * 10)) + result;
	}
	if (ns / 2 == 0)
	{
		result = result;
	}
	else 
	{
		result = (result * -1);
	}
	if (ndig > 0 )
	{ 
		return (result);
	}
	else 
	{
		return (0);
	}

}
