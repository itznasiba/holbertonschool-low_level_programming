#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: size
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > (int)len2)
		n = len2;

	new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);

	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}

	while (j < (int)n)
	{
		new[i + j] = s2[j];
		j++;
	}

	new[i + j] = '\0';

	return (new);
}
