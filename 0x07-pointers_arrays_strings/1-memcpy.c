#include "main.h"

/**
 * _memcpy- function to copy from mem location to another
 *
 * @src: input path
 * @dest: output path
 * @n: number of store bytes
 *
 * Return: output path
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
