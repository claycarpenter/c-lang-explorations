#include <stdio.h>

int celsius_to_farenheit(int c)
{
  return c * (9/5) + 32;
}

typedef int (* converter)(int from);

int main()
{
  // int (* convert)(int from) = celsius_to_farenheit;
  converter convert = celsius_to_farenheit;
  int celsius = 34;
  printf("%d C is %d F\n", celsius, convert(celsius));
}
