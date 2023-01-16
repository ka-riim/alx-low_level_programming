#include "main.h"
/**
 * _isupper - entry point
 * @c: place holder for var
 * Return: 1 if success 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
