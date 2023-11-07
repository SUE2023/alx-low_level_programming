#include<stdlib.h>
#include<stdio.h>
#include"dog.h"
/**
 * new_dog - creates a new dog
 * Description: and stores a copy of name and owner
 * @name: member one
 * @age: member two
 * @owner: member three
 * Return: data type/dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int index, lenNew, lenOld;
	struct dog *new_dog = NULL;

	lenNew = 0;
	while (name[lenNew] != '\0')
		lenNew++;
	lenOld = 0;
	while (name[lenOld] != '\0')
		lenOld++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(lenNew + 1);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->owner = malloc(lenOld + 1);
	if (new_dog->owner == NULL)
		return (NULL);
	for (index = 0; index <= lenNew; index++)
		new_dog->name[index] = name[index];
	for (index = 0; index <= lenOld; index++)
		new_dog->owner[index] = owner[index];
	new_dog->age = age;
	return (new_dog);

}
