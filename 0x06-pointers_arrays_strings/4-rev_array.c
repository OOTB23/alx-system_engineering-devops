#include "main.h"

/**
 * reverse_array- function to reverse array order
 *
 * @a: array on int
 *
 * @n: number of array elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int c = 0;
	int tmp;

	while (c < (n / 2))
	{
		tmp = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = tmp;
	}
}
