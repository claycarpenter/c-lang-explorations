#include <stdio.h>

int main()
{
  int apples = 5;
  int * p = &apples;
  int oranges = *p + 6;
  printf("apples = %d, oranges = %d\n", apples, oranges);

  // No checking of pointers.
  int * u; // uninitialized pointer
  oranges = *u - 6;
  printf("apples = %d, oranges = %d\n", apples, oranges);


  int * np = 0;
  if (np)
  {
    // Never called; np == 0 and is falsy
    oranges = *np + 6;
  }

  return 0;
}
