#include "main.h"
/**
 * print_square - draws a sqaure of #  n long
 *@n: length of line
 *
 */
void print_square(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int s = 0;

			while (s < n)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			i++;
		}
	}
}
