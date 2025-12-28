#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the starting value (included)
 * @max: the ending value (included)
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
    int *array;
    int i, size;

    // 1. If min > max, return NULL
    if (min > max)
        return (NULL);

    // 2. Calculate the number of elements (inclusive)
    size = (max - min) + 1;

    // 3. Allocate memory for 'size' number of integers
    array = malloc(sizeof(int) * size);

    // 4. Check if malloc failed
    if (array == NULL)
        return (NULL);

    // 5. Fill the array with values from min to max
    for (i = 0; i < size; i++)
    {
        array[i] = min;
        min++;
    }

    return (array);
}
