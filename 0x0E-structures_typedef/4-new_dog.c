#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: pointer to a variable to copy
 * @owner: pointer to a variable to copy
 * @age: float variable type
 *
 * Return: to dog_t or NULL if it fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namerunner, ownerrunner;
	/* here we allocate the *new_dog function and test if is null or not */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (new_dog);
	/* find out the size of the *name and *owner */
	for (namerunner = 0; name[namerunner]; namerunner++)
	{
	}
	for (ownerrunner = 0; owner[ownerrunner]; ownerrunner++)
	{
	}
	new_dog->name = malloc((namerunner + 1) * sizeof(char));
	new_dog->owner = malloc((ownerrunner + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	/* once I have the memory allocated */
	/* I start copying the variables to the malloc pointer *new_dog */
	for (namerunner = 0; name[namerunner]; namerunner++)
		new_dog->name[namerunner] = name[namerunner];
	for (ownerrunner = 0; owner[ownerrunner]; ownerrunner++)
		new_dog->owner[ownerrunner] = owner[ownerrunner];
	/* now I set them to zero so the function return the output I need */
	new_dog->name[namerunner] = 0;
	new_dog->owner[ownerrunner] = 0;
	new_dog->age = age;
	return (new_dog);
}
