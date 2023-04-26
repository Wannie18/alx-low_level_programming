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
		for (i = n; n <= 98; n++)
		       printf("%d, ", n);	
	}
	else
	{
		for (a = n; n <= 98; n--)
			print("%d, ", n);
	}
}
