#include "main.h"
/**
 * _islower - prints the alphabet in small letters
 * @c: character to be evaluated
 *
 * Return: 1 if lowercase and 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
