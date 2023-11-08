#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct op - the struct that finds the operation
 *
 * @op: the operation
 * @f: function pointer
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

/*
 * functions
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
