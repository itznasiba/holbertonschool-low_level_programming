#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * return: Always 0 (Success)
 */

int main(void){
	char c ='a';

	while( c<= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
