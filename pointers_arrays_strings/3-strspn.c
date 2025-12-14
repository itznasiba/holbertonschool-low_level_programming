#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: a string
 * @accept: a string
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				n++;
				break;

			}
		}
		if (!found)
			break;
	}
	return (n);
}
