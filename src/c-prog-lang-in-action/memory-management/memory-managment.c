#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Reserve space
  int * p = (int *) malloc(4);

  if (!p)
  {
    // could not allocate memory
    return 1;
  }

  // Init
  *p = 42;

  printf("p: %d\n", *p);

  // Clean up
  free(p);

  // Assign null to pointer to note that it's freed.
  // Causes immediate crash, rather than corrupted pointer.
  p = 0;

  return 0;
}
