#include <stdio.h>

int main()
{
  char * message = "Hello world";
  char buffer[250];

  sprintf(
    buffer,
    "<html><body><p>%s</p></body></html>",
    message
  );

  printf("Formatted string: %s\n", buffer);

  return 0;
}
