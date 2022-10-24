#include "main.h"
/**
 * _strlen - entry
 * @s: integer
 * Return: Always 0
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i] != '\0'; s++)
	{
		i++;
		return (i);
	}
}
