#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: pointer to the dynamic memory, otherwise NULL
 *	if there is insufficient memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
