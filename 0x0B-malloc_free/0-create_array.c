#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it
 * @size: the size of the array
 * @c: the character to initialize the array
 *
 * Return: The array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *l;

	if (size == 0)
		return (NULL);
	l = malloc(size * sizeof(char));
	if (l == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		l[i] = c;
	}
	return (l);
}
