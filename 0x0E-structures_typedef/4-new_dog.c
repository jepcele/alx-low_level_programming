#include "dog.h"
#include <string.h>
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
	newdog->name = strdup(name);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = strdup(owner);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	return (newdog);
}
