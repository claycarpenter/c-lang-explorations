#include <stdio.h>

void MinMax(
  int * begin,
  int * end,
  int ** smallest,
  int ** largest
)
{
  if (begin == end)
  {
    *smallest = 0;
    *largest = 0;
  }
  else
  {
    *smallest = *largest = begin;

    while (++begin != end)
    {
      if (*begin < **smallest)
      {
        *smallest = begin;
      }
      if (*begin > **largest)
      {
        *largest = begin;
      }
    }
  }
}

int main()
{
  int set[] = {1,2,-3,45,5};
  int set_size = sizeof(set) / sizeof(set[0]);

  int * smallest = 0;
  int * largest = 0;

  MinMax(
    set,
    set + set_size,
    &smallest,
    &largest
  );

  printf("min: %d, max: %d\n", *smallest, *largest);

  return 0;
}
