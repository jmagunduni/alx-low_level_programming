#include <stdlib.h>
#include "dog.h"

/**
*init_dog - this function
*initializes a variable of type struct dog
*@d: pointer to structure dog
*@name: initialise the name
*@age: initialise the age
*@owner: initialise the dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
