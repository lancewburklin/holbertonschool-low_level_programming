#include "dog.h"

/**
 * init_dog - Creates a new dog struct
 * @d: The dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner
 *
 * Return: Nada
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	 (*d).age = age;
	  (*d).owner = owner;
}
