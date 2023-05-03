#include "main.h"
/**
 * _strcpy - copies string from one pointer to another
 *
 * @dest: ponter to be copied to
 * @src: pointer to copy from
 *
 * Return: copied pointer
 */
char * _strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (src[i] != 0)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
