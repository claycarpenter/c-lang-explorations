#include <stdio.h>

void run()
{
  static int hens;
  // int hens;
  int eggs = 4;

  hens += 1;
  eggs += 1;

  printf("hens: %d, eggs: %d\n", hens, eggs);
}

void stack_trample()
{
  int a = 123;
  int b = 456;
}

int main()
{
  stack_trample();
  run();
  stack_trample();
  run();
  stack_trample();
  run();

  return 0;
}
