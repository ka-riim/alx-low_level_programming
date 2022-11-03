#include "main.h"
/**
 * help - check for prime number
 * @n: iterator
 * @base: num to check
 * Return: 1 if true 0 otherwise
*/
int help(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	if (n == base - 1)
		return (1);
	if (base > n)
		return (help(n + 1, base));
	return (1);
}
/**
 * is_prime_number - checks for a prime number
 * @n: number to check
 * Return: integer
*/
int is_prime_number(int n)
{
	return (help(2, n));
}
