#include "main.h"
/**
 * rev_string - prints an array of charecters to the stout in reverse
 * @s:  string to be printed
 */
void rev_string(char *s)
{
	int c = 0;
	int i = 0;

	while (s[c] != 0)
	{
		c++;
	}
	while (i <= c)
	{
		s[i] = (s[c - i]);
		i++;
	}
}
