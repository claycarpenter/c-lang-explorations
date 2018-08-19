#include <stdio.h>

// This is just playing around with "boolean" values in C.

void is_true_or_false(int value)
{
  if (value)
  {
    printf("%d is true", value);
  }
  else
  {
    printf("%d is false", value);
  }

  printf("\n");
}

int main()
{
  is_true_or_false(0);
  is_true_or_false(1);
  is_true_or_false(10);
  is_true_or_false(-10);

  return 0;
}
