#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar (c++);
	putchar ('\n');

	return (0);
}
