#include "main.h"
/**
 * help - checks for the squareroot of a number
 * @base: number being checked
 * @a: number to check for against base which is n
 * Return: square root
*/
int help(int a, int base)
{
	if (a * a == base)
	{
		return (a);
	}
	if (a * a > base)
	{
		return (-1);
	}
	return (help(a + 1, base));
}
/**
 * _sqrt_recursion - checks for the square root of a number
 * @n:number to square root
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (help(1, n));
}
