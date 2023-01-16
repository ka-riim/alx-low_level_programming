#include "main.h"
/**
 * _strpbrk - searches for a string
 * @s: string to search
 * @accept: bytes to include
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
