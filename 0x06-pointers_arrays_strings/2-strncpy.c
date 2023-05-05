#include "main.h"
/**
 * _strncpy - copies n elements of a string
 * @dest: destination address
 * @src: source addresss
 * @n: number of elements to be copied
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
