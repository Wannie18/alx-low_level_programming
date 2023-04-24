#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	char hexadecimal[17] = "0123456789abcdef\n";
	int i = 0;

	while (i < 17)
	{
		putchar(hexadecimal[i]);
		i++;
	}
	return (0);
}
