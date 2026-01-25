#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: a string
 * @b: a constant byte
 * @n: the number of bytes
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
