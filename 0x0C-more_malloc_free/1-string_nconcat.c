#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to concat
 * @n: number of bytes to truncate by
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for ( ; s1[i]; i++)
		;
	for ( ; s2[k]; k++)
		;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			p[j] = s1[j];
		if (j >= i)
		{
			p[j] = s2[k];
			k++;
		}
		j++;
	}
	p[j] = '\0';
	return (p);
}
