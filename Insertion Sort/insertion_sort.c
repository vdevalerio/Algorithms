#include <stdio.h>

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
    }
  }

  return 0;
}
