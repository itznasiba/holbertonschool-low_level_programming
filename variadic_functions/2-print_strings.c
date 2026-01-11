#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: a symbol to be printed between
 * @n: the number of the arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args,n);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
