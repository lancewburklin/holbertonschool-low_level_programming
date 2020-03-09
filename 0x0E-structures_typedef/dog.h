#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  Dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: All the information needed for this dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
