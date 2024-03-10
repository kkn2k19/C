#include <stdio.h>

void main (){
  int a=7, b=3, c=6;
  if (a>=b && a>=c){
    printf("a is largest.");
  }
  else if (b>=c){
    printf("b is largest.");
  }
  else {
    printf("c is largest.");
  }
}
