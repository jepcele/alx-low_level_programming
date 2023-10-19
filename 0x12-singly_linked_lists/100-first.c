#include "stdio.h"
/**
 * print_first - function that prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n before the main function is executed.
 * Return: nothing
 */
void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
