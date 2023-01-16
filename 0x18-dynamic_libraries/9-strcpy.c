#include "main.h"
/**
 * _strcpy - entry
 * @dest: place holder
 * @src: to be copied
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);
}
