#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int *arr;
	unsigned int i;

	arr = _calloc(5, sizeof(int));
	if (arr == NULL)
		return (1);

	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	return (0);
}
