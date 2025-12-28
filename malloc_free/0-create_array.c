#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size
 * @c: character
 *
 * Return: a pointer to the array, or NULL if size if 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return NULL;

	arr = malloc(sizeof(char)*size);

	if (arr == NULL)
		return NULL;

	while (i < size){
		arr[i] = c;
		i++;
	}
	return (arr);
}
