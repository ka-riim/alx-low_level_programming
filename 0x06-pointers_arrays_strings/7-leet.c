#include "main.h"
/**
 * leet - encoding
 * @s: string
 * Return: char
*/
char *leet(char *s)
{
	int x;
	int y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
		}
	}
	return (s);
}
