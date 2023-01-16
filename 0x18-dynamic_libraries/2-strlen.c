#include "main.h"
/**
 * _strlen - entry for string length
 * @s: sring to be measured
 * Return: i if success
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
