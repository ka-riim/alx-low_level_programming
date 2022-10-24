#include "main.h"
#include <stdio.h>
/**
 * print_array - entry
 * @a: array
 * @n: num of element
*/
void print_array(int *a, int n)
{
	int i;

	for (i  = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
