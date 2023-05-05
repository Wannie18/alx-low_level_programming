#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: first string 
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len])
	{
		len++;
	}
	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
