#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * init_dog - initialize a variable of type
 * Description: struct dog
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner:name of owner of the dog
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog_t mydog;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	d = &mydog;

	(*d).name = name;
	mydog.age = age;
	d->owner = owner;
}

