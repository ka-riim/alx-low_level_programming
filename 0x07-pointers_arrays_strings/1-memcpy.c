#include "main.h"
/**
 * _memcpy - copies src to dest
 * @src: memory to copy
 * @dest: destination
 * Return: dest
 * @n: number of byte to copy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
