#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a string to duplicate
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *arr;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}

	arr[i] = '\0';

	return (arr);
}
