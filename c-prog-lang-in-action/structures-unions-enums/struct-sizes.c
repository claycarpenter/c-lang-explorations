#include <stdio.h>

typedef struct
{
  short first;
  int second;
  short third;
} LayoutPadded;

typedef struct
{
  short first;
  short third;
  int second;
} LayoutPacked;

int main()
{
  printf("short %d\n", (int) sizeof(short));
  printf("int %d\n", (int) sizeof(int));
  printf("long %d\n", (int) sizeof(long));
  printf("LayoutPadded struct %d\n", (int) sizeof(LayoutPadded));
  printf("LayoutPacked struct %d\n", (int) sizeof(LayoutPacked));

  return 0;
}
