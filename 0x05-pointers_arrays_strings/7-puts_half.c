#include "main.h"
/**
 * puts_half - prints half of the string if even and n characters if old
 *
 * @str: string received
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		int i;

		for (i = len/2; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = (len - 1)/2; j <= len; j++)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
