#include "main.h"
/**
 * _isdigit - checks if a character is between numbers 0 through 9
 * @c: character to be evaluated
 *
 * Return: 1 if is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
