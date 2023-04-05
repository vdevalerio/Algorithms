#include <stdio.h>
#include "helper_functions.c"

int main()
{
  int elements[] = {7, 6, 5, 4, 3, 2, 1, 0};
  int length = sizeof(elements) / sizeof(elements[0]);

  for(int i = length - 1; i >= 0; i--)
  {
    for(int j = 0; j < i; j++)
    {
      if(elements[j + 1] < elements[j])
      {
        int temp = elements[j];
        elements[j] = elements[j + 1];
        elements[j + 1] = temp;
      }

      for(int i = 0; i < (sizeof(elements)) / sizeof(elements[0]); i++)
      {
        printf("%d, ", elements[i]);
      }

      printf("\n");
    }
  }



  return 0;
}