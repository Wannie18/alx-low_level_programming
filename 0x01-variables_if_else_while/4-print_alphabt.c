#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	char alphabet[25] = "abcdfghijklmnoprstuvwxyz\n";
	int i = 0;

	while (i < 25)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
