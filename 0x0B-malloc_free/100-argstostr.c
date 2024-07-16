#include <stdlib.h>

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    int i, j;
    int total_length = 0;
    char *str;
    int k = 0;

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            total_length++;
        }
        total_length++;
    }

    str = malloc(sizeof(char) * (total_length + 1));
    if (str == NULL) {
        return NULL;
    }

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            str[k++] = av[i][j];
        }
        str[k++] = '\n';
    }
    str[k] = '\0';

    return str;
}

