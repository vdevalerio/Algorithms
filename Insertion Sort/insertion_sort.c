#include <stdio.h>
#include "functions.h"
#include "functions.c"

int main()
{
	int elements[] = {7, 6, 5, 4, 3, 2, 1, 0};
	int length = sizeof(elements) / sizeof(elements[0]);

	printf("Before sorting: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", elements[i]);
	}
	printf("\n");

	insertion_sort(elements, length);

	printf("After sorting: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", elements[i]);
	}
	printf("\n");

	return 0;
}
