#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the size of various types on the compiling  computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("size of char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("size of int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("size of long int: %lu byte(s) \n", (unsigned long)sizeof(l));
	printf("size of long long int: %lu byte(s) \n", (unsigned long)sizeof(ll));
	printf("size of long float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
