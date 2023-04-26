#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n - the starting number
 */
void  print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		       printf("%d, ", i);	
	}
	else
	{
		int a;

		for (a = n; a <= 98; a--)
			printf("%d, ", a);
	}
}
