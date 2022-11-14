#ifndef DOG_H
#define DOG_H
/*
 * dog_t - typedef for new struct dog
*/
typedef struct dog dog_t;


/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: this struct is for dog informations
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
