#include <stdio.h>
#include "functions.h"

int main()
{
	int elements[] = {7, 6, 7, 5, 7, 4, 3, 2, 6, 1, 0};
	int length = sizeof(elements) / sizeof(elements[0]);
	int nondecreasing = 1;

	printf("Before sorting: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", elements[i]);
	}
	printf("\n");

	insertion_sort(elements, length, nondecreasing);

	printf("After sorting nondecreasing: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", elements[i]);
	}
	printf("\n");

	nondecreasing = 0;
	insertion_sort(elements, length, nondecreasing);

	printf("After sorting nonincreasing: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", elements[i]);
	}
	printf("\n");


	return 0;
}
