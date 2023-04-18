#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	/*clear / frees the memory allocated to structure of the dog*/
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
