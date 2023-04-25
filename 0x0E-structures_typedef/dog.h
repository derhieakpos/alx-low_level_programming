#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The basic info of a dog
 * @name: First name
 * @age: Age
 * @owner: Ownwer fo the dog
 *
 * Description: Long Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
