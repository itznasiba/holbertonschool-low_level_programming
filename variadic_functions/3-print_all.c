#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);
	if (format)
		while (format[i])
		{
			if (sep)
				printf(", ");
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				printf("%c", c);
				sep = 1;
			}
			if (format[i] == 'i')
			{
				printf("%d", va_arg(args, int));
				sep = 1;
			}
			if (format[i] == 'f')
			{
				f = (float)va_arg(args, double);
				printf("%f", f);
				sep = 1;
			}
			if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				else
					printf("%s", s);
				sep = 1;
			}
			i++;
		}
	va_end(args);
	printf("\n");
}
