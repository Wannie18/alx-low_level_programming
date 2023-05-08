#include "main.h"
/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int l = 5;
	char letr[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < l)
		{
			if (s[i] == letr[j] || s[i] - 32 == letr[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
