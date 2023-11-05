#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked causese a normal process termination with a status value of 98
 * b - the allocated memory
 * return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b){
	void *malloc_checked;
	malloc_checked = malloc(b);
		if(malloc_checked == NULL)
			exit(98);
		return (malloc_checked);
}
