#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (NULL);
}
