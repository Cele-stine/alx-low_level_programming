#ifndef DOG_H
#define DOG_H
/**
 * struct dog - discription of dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strcpy(char *dest,const char *src);
int _strlen(char *s);
#endif
