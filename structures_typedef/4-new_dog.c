#include <stdio.h>

/**
 * dog_t - creates a new dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name = 0;
	int len_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	while (name[len_name] != '\0')
	{
		len_name++;
	}
	while (name[len_name] != '\0')
	{
		len_name++;
	}
	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}



