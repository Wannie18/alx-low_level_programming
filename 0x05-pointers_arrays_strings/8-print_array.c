#include "main.h"
/**
 * print_array - prints n elements of an array
 *
 * @a: pointer to array
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
