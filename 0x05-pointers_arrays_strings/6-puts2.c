#include "main.h"
/**
 * puts2 - prints every other character in a string
 *
 * @str: string received
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i += 2)
	{	if(str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
