#include <stdio.h>

int main()
{
  int i = 1234;

  printf("Address: %p\n", &i);
  printf("Deref'd address: %d\n", *(&i));

  int * p = &i;
  printf("p val: %d\n",  *p);
  printf("p addr: %p\n",  p);

  int j = *p;
  printf("j val: %d\n", j);

  return 0;
}
