#include "main.h"
/**
 * _strlen - entry
 * @s: integer
 * Return: Always 0
*/
int _strlen(char *s)
{i
	int i;

	for (i = 0; s != '\0'; s++)
	{
		i++;
		return (i);
	}
}
