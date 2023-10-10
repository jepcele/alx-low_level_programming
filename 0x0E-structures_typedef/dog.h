#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct describing dog details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typdef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
