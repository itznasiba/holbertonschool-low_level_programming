#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: a string
 * @c: a character
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return NULL;
}
