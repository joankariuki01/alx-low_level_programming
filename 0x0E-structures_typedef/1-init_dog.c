#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to struct dog to initialize
 * 
 * @name: name to initialize
 *
 * @age: age fo initialize
 *
 * @owner: owner to initialize
 */
void init_dog(stduct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(stduct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
