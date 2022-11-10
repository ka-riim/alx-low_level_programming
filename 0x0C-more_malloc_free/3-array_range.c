#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of integers
*/
int *array_range(int min, int max)
{
	int *p;
	int range, x;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < range; min++, x++)
		p[x] = min;
	return (p);
}
