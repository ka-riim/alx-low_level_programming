#include "function_pointers.h"

/**
 * array_iterator - does an action to all the elements of an array
 * @array: array to iterate.
 * @size: size of array to iterate.
 * @action: function to carry out on array elements
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
			action(array[i]);
	}
}
