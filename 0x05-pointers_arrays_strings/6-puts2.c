#include "main.h"
/**
 * puts2 - entry
 * @str: integer
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
		i++;
	}
	_putchar('\n');
}

