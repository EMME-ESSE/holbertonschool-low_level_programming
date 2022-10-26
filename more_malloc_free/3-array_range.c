#include "main.h"
/**
 *  * *array_range - creates an array of integers
 *   * @min: minimum range of values stored
 *    * @max: maximum range of values stored
 *      * Return: pointer to the new array
**/
int *array_range(int min, int max)
{
int *new;
int i;
int size;
if (min > max)
return (NULL);
size = max - min + 1;
new = malloc(sizeof(int) * size);
if (new == NULL)
return (NULL);
for (i = 0; min <= max; i++)
new[i] = min++;
return (new);
}
