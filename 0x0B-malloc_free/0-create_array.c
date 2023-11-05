#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the number of elements passed
 * @c: thre char passed to the function
 *
 * Return: a pointer s to thecreated array
 */
char (*create_array(unsigned int size, char c)){
	char *ptArray;
	unsigned int  count;
ptArray= malloc(size*sizeof(char));
for(count=0;count<size;count++){
	ptArray[count]=c;

	}
	return (ptArray);
}
