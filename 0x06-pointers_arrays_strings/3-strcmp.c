#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an interger
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int lim;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		lim = i;
	}
	else
	{
		lim = j;
	}
	while (k <= lim)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}
		k++;
	}
	return (l);
}
