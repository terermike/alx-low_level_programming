#ifndef DOG_H
#define DOG_H
/**
 * struct dog - my structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Description: new struct containing a dog's details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
