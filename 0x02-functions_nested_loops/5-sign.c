#include "main.h"
/**
 * print_sign  - prints the alphabet in small letters
 * @n: interger to be evaluated
 *
 * Return: 1 if greater than zero, 0 if zero and -1 if anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
