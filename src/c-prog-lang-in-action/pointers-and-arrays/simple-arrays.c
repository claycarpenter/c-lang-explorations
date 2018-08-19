#include <stdio.h>

int array_size(int * array)
{
  int size = sizeof(array) / sizeof(array[0]);

  // return -1;
  return size;
}

void print_array(int * array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("[%d] %d\n", i, array[i]);
  }
}

void print_array_pointers(int * begin, int * end)
{
  for (; begin != end; ++begin)
  {
    printf("%d\n", *begin);
  }
}

int * greatest_number(int * begin, int * end)
{
  if (begin == end) return 0;

  int * greatest = begin;

  for (; begin != end; ++begin)
  {
    if (*greatest < *begin) greatest = begin;
  }

  return greatest;
}

int main()
{
  int numbers[6] = {11, -2, 200, 22, 33, 44};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  print_array(numbers, size);

  // Arrays and pointers
  int * p = numbers;
  int * end = p + size;

  for (; p != end; ++p)
  {
    printf("%d\n", *p);
  }

  print_array_pointers(numbers, end);

  int * greatest = greatest_number(numbers, end);
  printf("Greatest: %d\n", *greatest);

  return 0;
}
