#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*first step we ini now we print the details*/

/**
 * print_dog - print dog details
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
