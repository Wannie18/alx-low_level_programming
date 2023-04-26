#include "main.h"
/**
 * _isalpha - prints the alphabet in small letters
 * @c: character to be evaluated
 *
 * Return: 1 if c is an alphabet letter and 0 if anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
