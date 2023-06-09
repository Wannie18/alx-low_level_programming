#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the new string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
