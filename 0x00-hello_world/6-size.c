#include <stdio.h>
/**
 * main - Entry point
 * Description: p rints the size of various types on the computer it is compiled on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	printf("size of char: %lu \n", (unsigned long)sizeof (c));
	printf("size of int: %lu \n", (unsigned long)sizeof (i));
	printf("size of long int: %lu \n", (unsigned long)sizeof (l));
	printf("size of long long int: %lu \n", (unsigned long)sizeof (ll));
	printf("size of long float: %lu \n", (unsigned long)sizeof (f));
	return (0);
}
