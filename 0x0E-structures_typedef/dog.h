#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The basic info of a dog
 * @name: First name
 * @age: Age 
 * @Owner: Ownwer fo the dog
 *
 * Description: Long Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
