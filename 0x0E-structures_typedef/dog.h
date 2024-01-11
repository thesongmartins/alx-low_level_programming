#ifndef __STRUCT_AND_TYPEDEF__
#define __STRUCT_AND_TYPEDEF__

/**
 * struct dog - structure of a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
