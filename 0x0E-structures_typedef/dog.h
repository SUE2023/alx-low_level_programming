#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct with dog information
 * Description: a struct with dog information
 * @name: anem of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 * Return: (void)
 */

/**
 * dog_t - typedef for struct dog
 * Description: the new name for struct dog
 * Return: (void)
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
