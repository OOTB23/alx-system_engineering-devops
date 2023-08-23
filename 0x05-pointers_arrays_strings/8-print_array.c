#include "main.h"
#include <stdio.h>
/**
 * print_array - write every other character
 *
 * @a: int array
 * @n: array length
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < (n - 1); count++)
	{
		printf("%c, ", a[count]);
	}
	printf("%c\n", a[count]);
}
