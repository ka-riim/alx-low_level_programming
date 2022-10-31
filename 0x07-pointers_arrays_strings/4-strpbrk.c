#include "main.h"
/**
 * _strpbrk - searches for a string
 * @s: string to be searched
 * @accept: str being searched for
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return(s);
		}
		s++;
	}
	return(0);
}
