#include "main.h"
#include <stdio.h>
/**
  * cap_string - capitalizes characters
  * @s: value to be capitalized
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int cval = 13;
	char val[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cval)
		{
			if ((a == 0 || s[a - 1] == val[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
