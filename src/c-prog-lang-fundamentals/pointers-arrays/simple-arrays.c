#include <stdio.h>

int main()
{
  // int values[5];
  int values[] = {1,2,3,4,5};
  int * ptr = values;
  // int * last = &values[4];
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", *ptr);
    ++ptr;
  }

  return 0;
}
