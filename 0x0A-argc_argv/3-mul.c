#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguments passed to it
 * @argc: holds the count of the arguments passed
 * @argv: hold the arguments in an array of pointers
 * Return: zero if successful
 * On Error, return 1
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = num1 * num2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
