#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function that given element of array as parameter
 * @array: array
 * @size: the size of a array
 * @action: a pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
