#include <stdio.h>

int StringLength(char * string)
{
  int length = 0;

  // while (*string != 0)
  // {
  //   length++;
  //   string++;
  // }
  while (*string++)
  {
    ++length;
  }

  return length;
}

int StringLength2(char * string)
{
  int length = 0;

  char current;
  while ((current = *string))
  {
    length++;
    string++;
  }

  return length;
}

int main()
{
  char string[] = "Hello world";
  char * hi = "Hi!";

  printf("size %d\n", (int) sizeof(string));
  printf("String: %s\n", hi);
  printf("StringLength: %d\n", StringLength(hi));
  printf("String: %s\n", hi);
  char start = *string;
  printf("String start: %c\n", start);
  printf("StringLength2: %d\n", StringLength2(hi));

  return 0;
}
