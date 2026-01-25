#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 to 10
 *
 * Return: 0 in success
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
