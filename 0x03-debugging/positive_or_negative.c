#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * positive_or_negative - This is the main function where execution starts
 *@i: integer to be evaluated
 * Return: 0 after all code has been executed
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
