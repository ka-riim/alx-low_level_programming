#include "main.h"
/**
 *  _atoi - entry
 *  @s: place holder
 *  Return: int
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int x = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= +1;
		s++;
	}
	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		x = (x * 10) + (*s - '0');
		s++;
	}
	return (x * sign);
}
