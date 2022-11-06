#include "main.h"
/**
 * _islower - checks for lower case
 * @c: for lower
 * Return: Always 1 (Success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
