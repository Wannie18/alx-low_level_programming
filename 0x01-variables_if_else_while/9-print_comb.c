#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
