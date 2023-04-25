#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct type dog
 * @age: dog's age
 * @name: pointer to char name's dog
 * @owner: pointer to char owner's dog
 * Return: No.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
