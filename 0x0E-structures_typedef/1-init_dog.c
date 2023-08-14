#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: element 1 in struct dog
 * @age: element 2 in struct dog
 * @owner: element 3 in struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
