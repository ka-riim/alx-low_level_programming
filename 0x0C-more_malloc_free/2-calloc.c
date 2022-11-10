#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an initialized array
 * @nmemb: number of memory bytes
 * @size: number of data type
 * Return: return pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	p = malloc(x);
	if (p == NULL)
		return (NULL);
	while (i < x)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
