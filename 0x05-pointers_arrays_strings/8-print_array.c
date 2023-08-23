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
	int count = 0;

	if (n > 1)
	{
		for (; count < (n - 1); count++)
		{
			printf("%d, ", a[count]);
		}
		printf("%d\n", a[count]);
	}
	else if (n == 1)
	{
		printf("%d\n", a[count]);
	}
	else
	{
	}
}

