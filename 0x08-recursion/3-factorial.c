#include "main.h"
/**
 * factorial - gets the factorial of a number
 * @n: number to get factorial
 * Return: factorial of given number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
