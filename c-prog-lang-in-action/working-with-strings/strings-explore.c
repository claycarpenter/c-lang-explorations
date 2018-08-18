#include <stdio.h>
#include <ctype.h>

int main() {
  char * message = "\"Hello\", C:\\escape\\sequence\\test\n";
  printf("%s", message);

  for (char * p = message; *p; ++p)
  {
    char c = *p;
    printf("%c\t", c);
    if (isalnum(c)) printf("isalnum ");
    if (isalpha(c)) printf("isalpha ");
    if (islower(c)) printf("islower ");
    if (isupper(c)) printf("isupper ");
    if (isdigit(c)) printf("isdigit ");
    printf("\n");
  }

  // This will fail if defined as `char * caps_message`
  char caps_message[] = "Hello, I am a message.";
  for (char * p = caps_message; *p; ++p)
  {
    // printf("%c", *p);
    if (isupper(*p))
    {
      *p = (char) tolower(*p);
    }
    else if (islower(*p))
    {
      *p = (char) toupper(*p);
    }
  }

  printf("caps_message transformed: %s\n", caps_message);
}
