#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 *
 * Return: 0 in success
 */

int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}		
