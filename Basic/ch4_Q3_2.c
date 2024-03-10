//A do while is executed at least twice

#include <stdio.h>

int main()
{
  int c = 1;
  do {
    printf("Loop ran One time.\n");
    c++;
  } while (c == 2);                   // 0 means false condition.
  return 0;
}
