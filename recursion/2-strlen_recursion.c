#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i++;
	return (i + _strlen_recursion(s + 1));
}
