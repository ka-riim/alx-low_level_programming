#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dogg;
	int x, lname, lowner;

	p_dogg = malloc(sizeof(*p_dogg));
	if (p_dogg == NULL || !(name) || !(owner))
	{
		free(p_dogg);
		return (NULL);
	}
	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[lowner]; lowner++)
		;
	p_dogg->name = malloc(lname + 1);
	p_dogg->owner = malloc(lowner + 1);
	if (!(p_dogg->name) || !(p_dogg->owner))
	{
		free(p_dogg->owner);
		free(p_dogg->name);
		free(p_dogg);
		return (NULL);
	}
	for (x = 0; x < lname; x++)
		p_dogg->name[x] = name[x];
	p_dogg->name[x] = '\0';
	p_dogg->age = age;
	for (x = 0; x < lowner; x++)
		p_dogg->owner[x] = owner[x];
	p_dogg->owner[x] = '\0';
	return (p_dogg);
}
