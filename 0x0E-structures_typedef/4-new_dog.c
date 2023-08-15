#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: x
 */


int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copies
 *
 * @dest: pointer
 * @src: string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int y, x;

	y = 0;

	while (src[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates dog
 * @name: dog name
 * @age: dog age
 * @owner: the owner
 *
 * Return: pointer
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
