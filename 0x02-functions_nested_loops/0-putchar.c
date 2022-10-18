#include "main.h"
/**
 * main - Entry
 * Return: Always 0 (Succes)
*/
int main(void)
{
	char *v = "_putchar";

	while (*v)
	{
		_putchar(*v);
		v++;
	}
	_putchar('\n');
	return (0);
}
