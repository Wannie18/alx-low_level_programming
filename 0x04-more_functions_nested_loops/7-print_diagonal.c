#include "main.h"
/**
 * print_diagonal - draws a diagnol line n long
 *@n: length of line
 *
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			i++;
		}
	}
}
