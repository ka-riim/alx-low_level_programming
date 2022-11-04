#include <stdio.h>
/**
 * main - Entry
 * @argc: counter
 * @argv: vector
 * Return: int
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
