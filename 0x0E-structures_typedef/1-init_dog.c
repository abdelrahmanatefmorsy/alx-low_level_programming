#include "main.h"

/**
 * init_dog- entry point
 *@d:pointer of struct
 * @name: saged
 * @owner:owner of dog
 * @age: sagoda
 *
 * * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
