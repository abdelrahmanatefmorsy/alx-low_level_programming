#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size- calculate size of string
 * @s: string
 * Description: calculate size
 * Return: 0 success
 */

int size(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*fill-fillstring
*@s1: first string
*@s2: second tring
*Description : fill string 2 with 1
*Return: second string
*/

char *fill(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i]; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	return (s2);
}

/**
*new_dog- swap fun
*@name: name
*@age: age
*@owner: owner
*Descreption: copy two struct
*Return: new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(size(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(size(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = fill(name, dog->name);
	dog->age = age;
	dog->owner = fill(owner, dog->owner);
	return (dog);
}
