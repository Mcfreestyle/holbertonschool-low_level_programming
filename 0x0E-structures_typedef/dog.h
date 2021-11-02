#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - contains the dates of the dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

#ifndef DATE_DOG
#define DATE_DOG

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
