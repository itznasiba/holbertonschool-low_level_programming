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

	while (str[len] != '\0')
	{
		len++;
	}

	if (str == NULL)
		return NULL;
	
	arr = malloc(sizeof(char) * len);

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
