/*
Create a String using "" and prints its content a loop.
*/

#include <stdio.h>
#include <string.h>

int main () 
{
  char name[] = "KARAN";
  int i;
  for (i = 0; i < strlen(name); i++) {
    printf("%c", name[i]);
  }
  return 0;
}
