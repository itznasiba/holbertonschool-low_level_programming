#include <stdio.h>

/**
 * main - prints all the numbers from 1 to 100, but for multipliers of 3 Fizz, multipliers of 5 Buzz, multipliers of both 3 and 5 FizzBuzz
 *
 * Return: 0 in success
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz");
		if (a % 5 == 0 && a % 3 != 0)
			printf ("Buzz");
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz");
		if (a % 5 != 0 && a % 3 != 0)
			printf("%d",a);
		if (a != 100)
			printf(" ");
		a++;
	}
	return (0);
}
