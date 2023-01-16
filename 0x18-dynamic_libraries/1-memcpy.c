#include "main.h"
/**
 * _memcpy - copies src to dest
 * @src: memory space to be copied
 * @dest: where copied memory is stored
 * Return: dest
 * @n: number of byte to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
