#ifndef PRINT_DOG
#define PRINT_DOG
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  * print_dog - Prints a struct dog.
 *   * @d: The struct dog to be printed.
 *    */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else 
		printf ("%s", d->name);
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf ("%d", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	 else
		printf ("%s", d->owner);
}
#endif
