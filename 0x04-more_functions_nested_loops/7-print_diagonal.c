#include "main.h"
/**
 * print_diagonol - draws a diagnol line n long
 *@n: length of line
 *
 */
void print_diagonol(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('\\');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
	}
}
