#include <stdio.h>

int main()
{
  int areas[] = { 12, 12, 13, 14, 20 };
  char name_sam[] = "Sam";
  char *name_jan = "Jan";

  printf("Size of areas (int[]): %ld\n", sizeof(areas));
  printf("Size of name_sam (char[]): %ld\n", sizeof(name_sam));
  printf("Size of name_jan (*char): %ld\n", sizeof(name_jan));

  return 0;
}
