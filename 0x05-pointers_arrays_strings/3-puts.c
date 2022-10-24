#include"main.h"
/**
 * _puts - entry
 * @str: integer
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
