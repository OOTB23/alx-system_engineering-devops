#include "main.h"

/**
 * rot13- function to encrypt string by rot13
 *
 * @str: input string
 *
 * Return: string after change
 */
char *rot13(char *str)
{
	int c = 0;
	int i;
	char src[] = "abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dst[] = "nopqrstuvwxyzabcdefghigklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[c] != '\0')
	{
		for (i = 0; i < 52 ; i++)
		{
			if (str[c] == src[i])
			{
				str[c] = dst[i];
				break;
			}
		}
		c++;
	}

	return (str);
}
