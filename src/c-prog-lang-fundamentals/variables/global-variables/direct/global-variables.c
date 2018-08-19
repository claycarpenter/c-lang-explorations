#include <stdio.h>

int data;

void apples_set(int value)
{
  data = value;
}

int apples_get()
{
  return data;
}

int main()
{
  printf("apples=%d\n", apples_get());

  return 0;
}
