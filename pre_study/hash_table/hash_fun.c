#include <stdlib.h>
#define CAPACITY 100;

unsigned int hash(char *str)
{
    unsigned int i = 0, j;
    for (j = 0; str[j]; j++)
        i += str[j];
    return i % CAPACITY;
}
