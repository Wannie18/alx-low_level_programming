#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the duplicated string
  */
char *_strdup(char *str)
{
	int j = 0;
	int i = 1;
	char *d;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	d = malloc((sizeof(char) * i) + 1);
	if (d == NULL)
		return (NULL);
	while (j < i)
	{
		d[j] = str[j];
		j++;
	}
	d[j] = '\0';
	return (j);
}
