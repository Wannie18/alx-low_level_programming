#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints all the arguments passed to it
 * @argc: holds the count of the arguments passed
 * @argv: hold the arguments in an array of pointers
 * Return: zero if successful
 * On Error, return 1
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
