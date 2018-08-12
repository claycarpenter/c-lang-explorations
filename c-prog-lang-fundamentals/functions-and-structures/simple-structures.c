#include <stdio.h>


typedef struct {
  double red;
  double green;
  double blue;
} color;

int main()
{
  color c = {1, 0, 0};

  printf("c.red: %f\n", c.red);

  return 0;
}
