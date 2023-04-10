#include "functions.h"

void insertion_sort(int array[], int length)
{
	for(int i = 1, j; i < length; i++)
	{
		int key = array[i];
		j = i - 1;
		for(; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}
		array[j + 1] = key;
	}
}
