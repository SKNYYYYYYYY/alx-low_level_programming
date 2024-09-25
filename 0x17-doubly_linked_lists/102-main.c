#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, t = 0, x = 0, mul = 0;
    char muls[10], cp_muls[10], temp;

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            mul = i * j;           // Calculate multiplication
            sprintf(muls, "%d", mul);   // Convert result to string

            // Copy muls to cp_muls
            strcpy(cp_muls, muls);

            // Reverse cp_muls
            x = strlen(cp_muls);
            for (t = 0; t < x / 2; t++)
            {
                temp = cp_muls[t];
                cp_muls[t] = cp_muls[x - t - 1];
                cp_muls[x - t - 1] = temp;
            }

            // Check if muls and reversed cp_muls are equal
            if (strcmp(muls, cp_muls) == 0)
            {
                printf("%d * %d = %s (Palindrome)\n", i, j, muls);
            }
        }
    }
    
    return 0;
}
