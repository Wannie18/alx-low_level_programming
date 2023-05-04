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
	char *cat;

	*cat = *dest + *src;
	return (cat);	
}
