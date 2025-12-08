#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointed string
 *
 * Return: returns length of a string in int
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
