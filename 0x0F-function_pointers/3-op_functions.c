#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * op_add - adds two int
 * @a: first int
 * @b: second int
 * Return: sum of the two int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two int
 * @a: first int
 * @b: second int
 * Return: result of subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two int
 * @a: first int
 * @b: second int
 * Return: result of multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two int
 * @a: first int
 * @b: second int
 * Return: result of division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds modulo
 * @a: first int
 * @b: second int
 * Return: result of modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
