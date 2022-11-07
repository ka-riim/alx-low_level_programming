#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string
 * @str: pointer of string to be copied
 * Return: pointer to memory adress
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int x, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (x = 0; x < i; x++)
		s[x] = str[x];
	s[x] = '\0';
	return (s);
}
