#ifndef __MAIN__H
#define __MAIN__H
/*Headers*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*Function Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif