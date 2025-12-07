#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line
 *
 * Return: 0 in success
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz ");
		if (a % 5 ==0 && a % 3 !=0)
			printf("Buzz ");
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
		if (a % 5 != 0 && a % 3 != 0)
			printf("%d ",a);
		a++;
	}

	return (0);
}
