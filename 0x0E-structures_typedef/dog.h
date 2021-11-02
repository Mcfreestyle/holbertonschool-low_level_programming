#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - contains the dates of the dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef DATE_DOG
#define DATE_DOG

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
