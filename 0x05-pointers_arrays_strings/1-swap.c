#include "main.h"
/**
 * swap_int - swaps numbers
 *
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;

}
