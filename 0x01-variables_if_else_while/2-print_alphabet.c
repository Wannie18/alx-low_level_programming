#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
