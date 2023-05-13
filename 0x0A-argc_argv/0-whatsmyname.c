#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of th program
 * @argc: holds the count of the arguments passed
 * @argv: hold the arguments in an array of pointers
 * Return: zero if successful
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
