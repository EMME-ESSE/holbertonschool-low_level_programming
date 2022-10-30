#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: it returns a pointer
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name != NULL && owner != NULL)
	{
		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			return (NULL);
		}
		newdog->name = _strdup(name);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		newdog->owner = _strdup(owner);
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
	}
	return (newdog);
}


/**
 * _strdup - Duplicates a string
 * Return: The new string
 * @str: Initial String
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *string2;

	if (str == NULL)
	{
		return (NULL);
	}
	string2 = malloc(sizeof(char) * strlen(str) + 1);
	if (string2 == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str) + 1; i++)
		string2[i] = str[i];
	return (string2);
}
