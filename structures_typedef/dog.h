#ifndef DOG_H
#define DOG_H

/*
 * struct dog - structure for a dog
 * @name: the name of a dog
 * @age: the age of a dog
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /*DOG_H*/
