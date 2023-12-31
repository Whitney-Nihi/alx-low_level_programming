#ifndef DOG_H
#define DOG_H


/**
 * struct dog - struct to declare elements for dog object
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/*dog_t - typedef for struct dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
