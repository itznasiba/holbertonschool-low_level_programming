#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses array
 * @a: an array of integers
 * @n: the number of integers to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int len = 0;
	int temp;

	while (a[len] != '\0')
	{
		len++;
	}

	while (i < n)
	{
		temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - 1 - i] = temp;
	}
}
