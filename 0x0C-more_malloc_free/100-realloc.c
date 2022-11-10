#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the original memory block
 * @old_size: old size of memory block
 * @new_size: new size of memory block
 * Return: pointer to reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x, *ctr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	if (new_size > old_size)
	{
		x = malloc(new_size * sizeof(char));
		ctr = ptr;
		for (i = 0; i < old_size; i++)
			x[i] = ctr[i];
		free(ptr);
		return (x);
	}
	return (ptr);
}
