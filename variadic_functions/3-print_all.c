#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *sep = "";
	char *s;
	int i;
	double f;
	char c;

	va_start(args, format);

	while (p && *p)
	{
		switch (*p)
		{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%s%c", sep, c);
			sep = ", ";
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%s%d", sep, i);
			sep = ", ";
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%s%f", sep, f);
			sep = ", ";
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
			break;
		default:
			break;
		}
		p++;
	}

	va_end(args);
	printf("\n");
}
