#include <stdio.h>
#include <ctype.h>

void print_name_age(char *name, int age)
{
  printf("%s is %d years old\n", name, age);
}

void print_separator()
{
  printf("---\n");
}

int main(int argc, char *argv[])
{
  int ages[] = {
    23,
    43,
    12,
    89,
    2
  };
  char *names[] = {
    "Alan",
    "Frank",
    "Mary",
    "John",
    "Lisa"
  };

  int count = sizeof(ages) / sizeof(int);

  // using indexing
  for (int i = 0; i < count; i++)
  {
    print_name_age(names[i], ages[i]);
  }
  print_separator();

  // using pointers
  int *cur_age = ages;
  char **cur_name = names;
  for (int i = 0; i < count; i++)
  {
    print_name_age(*(cur_name + i), *(cur_age + i));
  }
  print_separator();

  // pointers as arrays
  for (int i = 0; i < count; i++)
  {
    print_name_age(cur_name[i], cur_age[i]);
  }
  print_separator();

  // pointers (in a "stupid complex" way?)
  for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
  {
    print_name_age(*cur_name, *cur_age);
  }
  print_separator();

  // reverse pointer iteration
  cur_age = (ages + count - 1);
  cur_name = (names + count - 1);
  for (; (cur_age - ages) >= 0; cur_age--, cur_name--)
  {
    print_name_age(*cur_name, *cur_age);
  }
  print_separator();

  return 0;
}
