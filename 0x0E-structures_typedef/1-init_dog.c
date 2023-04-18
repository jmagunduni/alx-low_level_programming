#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog
* @name: intialise name
* @age: initialise age
* @owner: initialise owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	/*initialise dog details*/
	d->name  = name;
	d->owner = owner;
	d->age   = age;
}
