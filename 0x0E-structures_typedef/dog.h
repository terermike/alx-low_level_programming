#ifndef DOG_H
#define DOG_H
/**
 * struct dog - my structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Description: new struct containing a dog's details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
