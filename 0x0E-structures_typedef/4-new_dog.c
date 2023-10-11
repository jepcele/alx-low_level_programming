#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);
	newdog->name = name;
	if (!newdo->name)
		return (NULL);
	newdog->age = age;
	newdog->owner = owner;
	if (!newdog->owner)
		return (NULL);

	return (newdog);
}
