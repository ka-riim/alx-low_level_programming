#include "main.h"
/**
 * _strspn - get len of prefix substring
 * @s: string to search
 * @accept: byte to search for
 * Return: number of byte
*/
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int i = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					i++;
				}
			}
		}
		else
		{
			return (i);
		}
	}
	return (i);
}
