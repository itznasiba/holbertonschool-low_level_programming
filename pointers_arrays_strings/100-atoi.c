#include <stdio.h>
#include "main.h"

/**
 * _atoi - turns a string to an integer with its sign
 * @s: a st4ring to be turned into an integer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int digit;
	int sign = 1;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = sign * (-1);
		if (*s >= '0' && *s <= '9')
			break;
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (sign == 1)
			{
				if (result > (2147483647 - digit) / 10)
					return (2147483647);
			}
			else
			{
				if (result < (-2147483648 + digit) / 10)
					return (-2147483648);
			}

			result = result * 10 + (*s - '0');
		}
		if (*s < '0' || *s > '9')
			break;
		s++;
	}

	return (sign * result);
}
