#include <stdio.h>
/**
 * main - checks the multiples of 3 and 5 and prints fizz, buzz or fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
		num++;
	}
	printf("\n");
	return (0);
}
