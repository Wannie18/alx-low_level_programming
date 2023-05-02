#include "main.h"
/**
 * _puts - prints an array of charecters to the stout
 * @str - string to be printed
 */
void _puts(char *str)
{
	int i;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}	
}
