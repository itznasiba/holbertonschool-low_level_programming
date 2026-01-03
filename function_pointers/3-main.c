#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	int (*op_funct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_funct = get_op_func(argv[2]);
	
	if (argv[2][1] != '\0')
	{
		printf ("Error\n");
		return (99);
	}

	if (op_funct == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (98);
	}

	result = op_funct(a,b);
	printf("%d\n",result);
	return (0);
}
