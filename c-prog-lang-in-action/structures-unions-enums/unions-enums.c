#include <stdio.h>

typedef union
{
  int number;
  char letter;
} SimpleUnion;

typedef enum
{
  TheNumber = 1,
  TheLetter = 2
} ValueType;

typedef struct
{
  SimpleUnion value;
  ValueType type;
} FlexValue;

void print_flex_value(FlexValue * flex_value)
{
  if (flex_value->type == TheNumber) {
    printf("Number: %d\n", (int) flex_value->value.number);
  } else if (flex_value->type == TheLetter) {
    printf("Letter: %c\n", (char) flex_value->value.letter);
  }
}

int main()
{
  SimpleUnion test;
  test.letter = 'C';
  ValueType type = TheLetter;
  FlexValue letter_container = {test, type};

  SimpleUnion number_union;
  number_union.number = 1234;
  FlexValue number_container = {number_union, TheNumber};

  print_flex_value(&letter_container);
  print_flex_value(&number_container);

  return 0;
}
