
#include <stdio.h>

int main() {
   int n, i, j;

   printf("Enter the number of lines required: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      // print spaces before the numbers
      for (j = 1; j <= n - i; j++) {
         printf("  ");
      }

      // print numbers in increasing order
      for (j = 1; j <= i; j++) {
         printf("%d ", j);
      }

      // print numbers in decreasing order
      for (j = i - 1; j >= 1; j--) {
         printf("%d ", j);
      }

      // move to next line
      printf("\n");
   }

   return 0;
}
