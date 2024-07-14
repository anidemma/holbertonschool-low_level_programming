#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @d: variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.1f\nOwner: %s", d->name, d->age, d->owner);
}
