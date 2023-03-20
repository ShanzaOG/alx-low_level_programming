#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - this is a user defined data type called dog
 * @name: pointer to char
 * @age: pointer to float
 * @owner: pointer to char
 * Description: takes three attributes name, age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
