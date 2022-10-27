#ifndef MY_STRUCT
#define MY_STRUCT
#include <stdio.h>
#include <stdlib.h>
/**
 ** struct my_struct - a structure with three elements
 ** @name: name
 ** @age: the age
 ** @owner: the owner
**/


struct my_struct
{
	char *name;
	float age;
	char *owner;
};
#endif
