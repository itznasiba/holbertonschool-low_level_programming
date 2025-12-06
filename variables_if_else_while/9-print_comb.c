#include <stdio.h>

/**
 * main - prints all numbers
 *
 * Return: 0 in success
 */

int main(void)
{
	int n = '0';

	while (n < '9')
        {
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	return (0);
}
