#include "main.h"
/**
 * jack_bauer - prints 24 hours
 *
 */
void jack_bauer(void)
{
	int h = 0;

	while (h <= 23)
	{
		int m = 0;

		while (m <= 9)
		{
			int s = 0;

			while (s <= 9)
			{
				int c = 0;

				while (c <= 9)
				{
					_putchar('0' + h);
					_putchar('0' + m);
					_putchar(' : ');
					_putchar('0' + s);
					_putchar('0' + c);
					_putchar('\n');
					c++;
				}
				s++;
			}
			m++;
		}
		h++;
	}
}
