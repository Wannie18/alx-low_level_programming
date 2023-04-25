#include<stdio.h>
/**
 * main - This is where execution begins
 *
 * Return: 0 when exection ends
 */
int main(void)
{
	char toPrint[9] = "_putchar\n";
	int a = 0;

	while (a < 9)
	{
		putchar(toPrint[a]);
		a++;
	}
	return (0);
}
