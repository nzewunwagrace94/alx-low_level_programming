#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: name of do
 * @age: age of dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
