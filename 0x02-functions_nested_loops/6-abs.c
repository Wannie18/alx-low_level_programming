#include "main.h"
/**
 * _abs - prints the alphabet in small letters
 * @n: character to be evaluated
 *
 * Return: 1 if lowercase and 0 if anything else
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
