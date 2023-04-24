#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	char alphabet[27] = "zyxwvutsrqponmlkjihgfedcba\n";
	int i = 0;

	while (i < 27)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
