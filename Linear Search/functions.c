#include <stdio.h>
#include "functions.h"

int pseudo_linear_search(int array[], int length, int value)
{
	for(int i = 0; i < length; i++)
	{
		if(array[i] == value)
		{
			printf("A[i] = %d, value = %d, i = %d.\n", array[i], value, i);
			return i + 1;
		}
	}

/******************************************************
LOOP INVARIANT:
	At the beginning of each iteration of the loop for
the algorithm has searched the prefix of the sequence
A up to index i - 1, and has not found the value in
that prefix.
******************************************************/

	return 0;
}
