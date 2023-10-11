#include <stdlib.h>
#include <dog.h>
/**
 * free_dog - a function that frees dogs
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d);
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
