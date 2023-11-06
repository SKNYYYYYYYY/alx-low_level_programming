#include<stdio.h>
/**
 * main - printing the file name of the file the program is compiled from
 *@void - it receives no arguments
 * Return:  0 so that the program exites
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
