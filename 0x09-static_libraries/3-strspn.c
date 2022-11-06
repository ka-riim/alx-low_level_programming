#include "main.h"
/**
 * _strspn - get length of prefix substring
 * @s: string to serch
 * @accept: byte to search for
 * Return: num byte
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int i = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
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
