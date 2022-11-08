#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program.
 * @av: array containing string of argument
 * @ac: number of arguments passed
 * Return: pointer to cincatenated string of arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j, len, blen;
	char *s;
	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	i = j = len = blen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	s = (char *)malloc(len * sizeof(char) + ac + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, blen++)
			s[blen] = av[i][j];
		s[blen] = '\n';
		blen++;
	}
	s[blen] = '\0';
	return (s);
}
