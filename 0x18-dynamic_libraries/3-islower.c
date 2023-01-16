#include "main.h"
/**
 * _islower - checks for lower case
 * @c: is of type int
 * Return: 0 if false and 1 if success
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
