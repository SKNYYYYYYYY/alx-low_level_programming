#include <stdio.h>
/**
 * execute_before_main - a function to print the required text
 * Return: nothing
 */
void __attribute__((constructor)) execute_before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
