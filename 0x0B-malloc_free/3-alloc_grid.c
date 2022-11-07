#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prints a 2d array
 * @width: width of array
 * @height:height of the array
 * Return: pointer to 2d array
*/
int **alloc_grid(int width, int height)
{
	int j, i;
	int **s;

	i = j = 0;
	if (height < 1)
		return (NULL);
	s = (int **)malloc(height * sizeof(s));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
