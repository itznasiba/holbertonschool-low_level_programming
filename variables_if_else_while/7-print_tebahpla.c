#include <stdio.h>

/**
 * main - prints alphabet in reverse in lowercase
 *
 * Return: 0 in success
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
