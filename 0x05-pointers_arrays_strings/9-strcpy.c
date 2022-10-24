#include "main.h"
/**
 * _strcpy -copying str
 * @dest: value holder
 * @src: to be copied
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) !n '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
