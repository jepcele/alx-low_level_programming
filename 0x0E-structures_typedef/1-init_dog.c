#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: struct to initialize
 * @name: name property of the struct
 * @age: age property of the dog
 * @owner: owner property of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
