#include "main.h"
/**
 * _isdigit - enntry point checks digit
 * @c: place holder
 * Return: 1 if success 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
