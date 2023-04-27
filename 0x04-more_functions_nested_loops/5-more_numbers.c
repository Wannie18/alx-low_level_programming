#include "main.h"
/**
 * more_numbers - prints numbers 1 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i = '0';

	while (i <= '10')
	{
		int a = '0';

		while (a <= '14')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
