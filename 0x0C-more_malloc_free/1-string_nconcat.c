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
	unsigned int s1count, s2count, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	if (s2count > n)
		s2count = n;
	else
		n = s2count;
	size = s1count + s2count + 1;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size - 1; i++)
		if (i < s1count)
			p[i] = s1[i];
	else
		p[i] = s2[i - s1count];
	p[size] = '\0';
	return (p);
}
