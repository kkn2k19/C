/*
If s[3] is a 1-D array of integers then *(s+3) refers to the third elements :
(i)   True
(ii)  False
(iii) Depends
*/

#include <stdio.h>

int main ()
{
  int i;
  int s[3];
  int n = 4;
  printf("Enter elements of the array : \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &s[i]);
  }
  printf("Elements address : \n");
  for (i = 0; i < n; i++){
      printf("%d ", &s[i]);
  }
  int *p = &s;
  p = p+3;
  printf("\nP : %d\n", p);             //p+3 and s[3] is same.
  return 0;
}
