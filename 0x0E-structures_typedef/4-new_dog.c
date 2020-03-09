#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog's owner's name
 *
 * Return: Nothing broski
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname;
	char *newowner;
	dog_t *fish = malloc(sizeof(dog_t));

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	if (fish == NULL)
		return (NULL);
	newname = malloc(_strlen(name) + 1);
	if (newname == NULL)
	{
		free(fish);
		return (NULL);
	}
	newname = _strcpy(newname, name);
	newowner = malloc(_strlen(owner) + 1);
	if (newowner == NULL)
	{
		free(fish);
		return (NULL);
	}
	newowner = _strcpy(newowner, owner);
	fish->name = newname;
	fish->age = age;
	fish->owner = newowner;
	return (fish);
}

/**
 * _strcpy - Copies a string
 * @src: Source of the copy
 * @dest: To where
 *
 * Return: void
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Length of a string
 * @s: The string
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
