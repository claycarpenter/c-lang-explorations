#include <stdio.h>

typedef unsigned char byte;

int main()
{
  int i = 123;
  byte b = 0x12;

  printf("%d (%d)\n", i, (int) sizeof(int));
  printf("%d (%d)\n", (int) b, (int) sizeof(byte));

  return 0;
}
