#include "main.h"
/**
 * print_rev - prints an array of charecters to the stout in reverse
 * @s:  string to be printed
 */
void print_rev(char *s)
{
	int c = 0;
	int i = 0;

	while (s[c] != 0)
	{
		c++;
	}
	while (i <= c)
	{
		_putchar(s[c - 1]);
		i++;
	}
	_putchar('\n');
}
