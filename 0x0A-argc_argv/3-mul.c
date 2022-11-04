#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @argc: counter
 * @argv: vector
 * Return: int
*/
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
