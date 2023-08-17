#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main (void)
{
	int r;
	int n;
	
	n = abs(-1024);
        r = (n % 10);
        putchar(r + 48);

	return (0);
}
