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
	int ns = 1;
	int count;
	char *c;
	int result = 0;

	c = s;
	while (*(s + len) != ('\0'))
	{
		if (*(s + len) == '-')
		{
			ns = ns * (-1);
		}
		while (*(s + len) > '0' && *(s + len) < '9')
		{
			result = result + (*(s + len) - 48 ) * (ndig * 10);
			ndig = ndig + 1;
		}

		if (ndig > 0 )
		{
			result = result * ns;
			break;
		}
		else 
		{
			result = 0;
		}
	}	
	return (result);
}

