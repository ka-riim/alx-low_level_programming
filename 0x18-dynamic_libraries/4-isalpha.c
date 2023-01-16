#include "main.h"
/**
 * _isalpha - checks for letter of different cases
 * @c: is the letter to be checked
 * Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
