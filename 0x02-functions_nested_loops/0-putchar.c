#include "main.h"
/**
 * main - Entry point
 *
 * Description: invoke function that write single character
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char s[] = "_putchar\n";
	int n;

	for (n = 0; n < 9; n++)
	{
		_putchar(s[n]);
	}

	return (0);
}
