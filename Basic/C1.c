/*
Write a program in C to take 10 numbers as input and display how many of them are Odd 
number and Even number. 
Test Data : 
10 11 75 89 56 44 22 77 55 65
Expected Output : 
Total number of “ODD” numbers: 6 
Total number of “EVEN” numbers:4 
Test Data : 
10 20 30 41 50 51 60 6 8 10 
Expected Output : 
Total number of “ODD” numbers: 2 
Total number of “EVEN” numbers:8 
*/

#include <stdio.h>

int main () 
{
  int n = 10;
  printf("Provide 10 numbers : ");
  int i;
  int arr[12];
  int odd;
  int even;
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) {
    if (arr[i]%2 == 0) {
       even++;
    }
    else {
       odd++;
    }
  }
  printf("Total number of "EVEN" number : %d\n", even);
  printf("Total number of "ODD" number : %d\n", odd);
  return 0;
}
