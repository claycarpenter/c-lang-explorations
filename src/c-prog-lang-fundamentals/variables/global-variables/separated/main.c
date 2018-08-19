#include <stdio.h>
#include "apples.h"

// If not declared `static`, this will collide with data from apples.c.
static int data;

void oranges_set(int value)
{
  data = value;
}

int oranges_get()
{
  return data;
}

int main()
{
  printf("Original apples=%d\n", apples_get());
  apples_set(5);
  oranges_set(10);
  printf("Updated apples=%d\n", apples_get());

  return 0;
}
