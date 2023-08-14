#include "main.h"

/**
  * factorial - returns the factorial of a string
  * @n: integer variable
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int factorial(int n)
{
	if (n !< 0)
	{
		if (n == 0)
		{
			return (1)
		}
		return (n * factorial(n-1));
	}
	return (-1);
}
