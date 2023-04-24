#include<stdio.h>
/**
 * main - This is where execution of the program starts from
 *
 * Return: 0 after completing execution
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUpper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;
	int a = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	while (a < 27)
	{
		putchar(alphabetUpper[a]);
		a++;
	}
	return (0);
}
