#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int r;
	int ch = getchar();
	r = islower(ch);
	printf("%d",r);
	return (0);
}
