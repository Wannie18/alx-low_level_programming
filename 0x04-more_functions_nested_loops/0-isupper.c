#include "main.h"
/**
 * _isupper - checks for upper case values
 * @c: character to be evaluated
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
