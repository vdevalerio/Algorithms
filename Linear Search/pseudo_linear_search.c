#include <stdio.h>
#include "functions.h"

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int length = sizeof(array) / sizeof(array[0]);
	int value = 15;

	int position_of_value = pseudo_linear_search(array, length, value);

	printf("The position of %d is %d.\n", value, position_of_value);

	return 0;
}
