#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a pointer to the allocated pointer
 * @b: size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
