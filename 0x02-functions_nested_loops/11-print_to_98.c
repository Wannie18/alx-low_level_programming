#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n - the starting number
 */
void  print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
			if (i == 98)
				printf("%d", i);
			else
		       		printf("%d, ", i);	
	}
	else
	{
		int a;

		for (a = n; a <= 98; a--)
			if (a == 98)
				printf("%d", a);
			else
				printf("%d, ", a);
	}
}
