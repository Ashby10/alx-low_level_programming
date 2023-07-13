#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function
 * @grid: pointer to a pointer
 * @height: int
 *
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
while (height--)
free(grid[height]);
free(grid);
}
