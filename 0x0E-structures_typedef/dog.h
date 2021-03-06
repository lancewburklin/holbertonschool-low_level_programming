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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void *_strcpy(char *dest, char *src);

int _strlen(char *s);

void free_dog(dog_t *d);

#endif
