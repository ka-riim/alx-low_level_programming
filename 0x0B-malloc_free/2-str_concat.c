#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings & returns pointer to new mem
 * @s1: first string
 * @s2: second string
 * Return: pointer to new memory location
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1c, s2c, tc, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1c = 0; s1[s1c]; s1c++)
		;
	for (s2c = 0; s2[s2c]; s2c++)
		;
	tc = s1c + s2c + 1;
	p = malloc(sizeof(char) * tc);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < tc; i++)
	{
		if (i < s1c)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[i - s1c];
		}
	}
	return (p);
}
