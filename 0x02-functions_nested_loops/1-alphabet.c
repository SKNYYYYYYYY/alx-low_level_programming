#include "main.h"
/**
*print_alphabet - print all alphabet in lowercase
*This function uses a for loop to print the lowercase
*alphabet in order. It then prints character to the screen.
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
