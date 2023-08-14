#ifndef DOG_H
#define DOG_H

/**
* struct dog - this is the structure of dog info
* @name: the dogs first name
* @age: the dogs last name
* @owner: The name of the dogs owner
*
* Description: this structure contains all props
*of a dog
*/

struct dog
{
char name;
double age;
char owner;
}


/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
