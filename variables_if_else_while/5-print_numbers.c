#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Return: 0 in success
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
