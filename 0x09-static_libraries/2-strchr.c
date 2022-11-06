#include "main.h"
/**
 * _strchr - finds a char in a string
 * @s: string to serch
 * @c: char to search for
 * Return: pointer
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
