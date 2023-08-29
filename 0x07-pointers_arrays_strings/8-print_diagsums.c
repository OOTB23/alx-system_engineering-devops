#include "main.h"
#include <stdio.h>

/**
 * print_diagsums-  function that prints the sum of the two diagonals
 *
 * @a: input array
 * @size: array size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int d1 = 0;
	int d2 = 0;


	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i];
		d2 = a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
