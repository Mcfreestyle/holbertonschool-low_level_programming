#include <stdio.h>
#include "dog.h"

#define isNull(str) ((str) != NULL ? str : "(nil)")

/**
 * print_dog - prints the dates of the dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", isNull(d->name));
		if (d->age > 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %.6f\n", .0f);
		printf("Owner: %s\n", isNull(d->owner));
	}
}
