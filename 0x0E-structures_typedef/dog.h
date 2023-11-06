#ifndef DOG_H
#define DOG_H

/* definig the template of do struct*/
/*struct dog{
	char *name;
	float age;
	char *owner;
};*/

typedef struct dog {
	char *name;
	float age;
	char *owner;
}dog_t;

/*other prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
