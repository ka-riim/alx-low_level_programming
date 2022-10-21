#include <stdio.h>
/**
 * main - entry
 * Return: 0 always true
*/
int main(void)
{
	int i;

	for (i = 1; i  < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
