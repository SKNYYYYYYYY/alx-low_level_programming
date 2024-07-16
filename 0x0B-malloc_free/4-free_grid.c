#include <stdlib.h>
/**
 *free_grind - frees the previous mem allocated
*@grind: pointer to a 2d array
*@height: height of a 2d array
*/
void free_grid(int **grid, int height)
{
    int i;

    for(i=0;i<height;i++)
	free(grid[i]);
    free(grid);
}
