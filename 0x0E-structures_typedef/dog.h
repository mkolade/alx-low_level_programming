#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - structure for a dog property
 * @name: The name
 * @age: The age
 * @owner: The owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
