#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in small letters
 *
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		a++;
	}
}
