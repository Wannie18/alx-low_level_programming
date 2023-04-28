#include "main.h"
/**
 * print_triangle - draws a triangle of #  n long
 *@n: length of line
 *
 */
void print_triangle(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int s = 0;

			while (s < i)
			{
				int a = 0;

				while (a < s)
				{
					_putchar(' ');
					a++;
				}
				_putchar('#');
				s++;
			}
			_putchar('\n');
			i++;
		}
	}
}
