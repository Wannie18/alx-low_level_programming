#include "main.h"
#include <stdio.h>
/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *h;
	int i;
	int aux;
	int k;

	h = a;
	for (i = 1; i < n; i++)
	{
		h++;
	}
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *h;
		*h = aux;
		h--;
	}
}
