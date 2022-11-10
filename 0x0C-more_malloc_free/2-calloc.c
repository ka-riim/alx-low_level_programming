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
	int *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < nmemb ; x++)
		p[x] = 0;
	return (p);
}
