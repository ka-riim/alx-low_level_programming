#include "main.h"
/**
 *  _atoi - converts str to int
 *  @s: str
 *  Return: int
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int p = 0;

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
		p = (p * 10) + (*s - '0');
		s++;
	}
	return (p * sign);
}
