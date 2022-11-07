#include <stdlib.h>
#include "main.h"
/**
 * create_array - creating an array
 * @size: size of array
 * @c: character
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
