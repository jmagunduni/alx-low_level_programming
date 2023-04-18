#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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

	printf("Name: %s\n Age:%f\nOwner: %s\n", d->name, d->age, d->owner)
}
