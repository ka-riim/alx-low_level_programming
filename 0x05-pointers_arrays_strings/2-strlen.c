#include "main.h"
/**
 * _strlen - entry
 * @s: integer
 * Return: Always 0
*/
int _strlen(char *s)
{i
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
