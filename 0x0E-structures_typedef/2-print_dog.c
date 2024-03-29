#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
