#include "main.h"
/**
 * _memset - fills memory space with b
 * @s: returns this
 * @b: char that would use to fill space
 * @n: number of times b would be used
 * Return: a pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
