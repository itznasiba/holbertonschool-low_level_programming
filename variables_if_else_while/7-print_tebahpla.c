#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 to 10
 *
 * Return: 0 in success
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
