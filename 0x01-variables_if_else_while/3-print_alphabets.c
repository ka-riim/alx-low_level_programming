#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (succes)
*/
int main(void)
{
	char small, cap;

	small = 'a';
	cap = 'A';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar("\n");
	return (0);
}
