#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type describing a dog
 * @name: the namme of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;