#include "main.h"
/**
 * print_line - draws a line n long
 *@n: length of line
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{	
			_putchar('-');
			i++;
		}
		_putchar('\n');
	}

}
