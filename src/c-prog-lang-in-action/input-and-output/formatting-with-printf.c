#include <stdio.h>

int main()
{
  double val = 123.456;

  printf("Default: %f\n", val);
  printf("Two decimals: %.2f\n", val);
  printf("Right aligned:\n%10.0f*\n", val);
  printf("Left aligned:\n%-10.0f*\n", val);

  char * message = "Hello world! This is a long string.";
  int size = 11;
  printf("%.*s\n", size, message);

  return 0;
}
