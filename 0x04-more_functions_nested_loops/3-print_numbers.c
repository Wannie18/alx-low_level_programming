#include "main.h"
/**
 * print_number - prints numbers from 0 to 9
 *
 */
void print_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
