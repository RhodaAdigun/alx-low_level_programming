#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the structure name to connect the structure members to
 * @name: a member of structure
 * @age: a member of structure
 * @owner: a member of structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog_ptr;

	dog_ptr = d;
	(*dog_ptr).name = name;
	(*dog_ptr).age = age;
	(*dog_ptr).owner = owner;
}
