#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments passed to it
 * @argc: holds the count of the arguments passed
 * @argv: hold the arguments in an array of pointers
 * Return: zero if successful
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d \n", argc - 1);
	return (0);
}
