#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: indicate number sign
 *
 * Return: Always 0 (sucess)
 */

void positive_or_negative(int i)
{

	/*
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	* your code goes there
	 */
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else
	{
	printf("%d is zero\n", i);
	}
}
