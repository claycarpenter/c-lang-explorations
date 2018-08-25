#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("ERROR: You need one argument.\n");
    return 1;
  }

  int i = 0;
  for (i = 0; argv[1][i]; i++)
  {
    char letter = argv[1][i];
    char normalized_letter = tolower(letter);

    switch (normalized_letter)
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        printf("%i: %c is a vowel\n", i, letter);
        break;

      case 'y':
        printf("%i: %c is sometimes a vowel\n", i, letter);
        break;

      default:
        printf("%i: %c is a consonant\n", i, letter);
    }
  }
  printf("\n");

  return 0;
}
