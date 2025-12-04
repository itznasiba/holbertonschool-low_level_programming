#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except e and q
 *
 * Return: 0 in success
 */

int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	
	putchar('\n');
	return (0);
}
