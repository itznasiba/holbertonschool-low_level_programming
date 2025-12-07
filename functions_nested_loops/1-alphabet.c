#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 in success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++
	}
	_putchar('\n');
	return (0);
}

