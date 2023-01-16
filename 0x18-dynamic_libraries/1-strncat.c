#include "main.h"
/**
 * _strncat - join only n byte of other string
 * @dest: string
 * @src: second string
 * @n: number of byte to copy
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
