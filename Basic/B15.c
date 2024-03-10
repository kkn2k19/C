/*
An ICSE school displays a notice on the school notice board regarding admission in Class
XI for choosing stream according to marks obtained in English, Maths and Science in
Class 10 Council Examination.

Marks obtained in different subjects                                   Stream
Eng, Maths and Science >= 80%                                       Pure Science
Eng and Science >= 80%, Maths >= 60%                                Bio. Science
Eng, Maths and Science >= 60%                                         Commerce

Print the appropriate stream allotted to a candidate. Write a program to accept marks in
English, Maths and Science from the console. 
*/

#include <stdio.h>

int main () 
{
  flaot e, m, s;
  printf("Provide marks obtained in percentage of ENGLISH, MATHS, SCIENCE : ");
  scanf("%f,%f,%f", &e, &m, &s);
  if (e >= 80 && m >= 80 && s >= 80) {
    printf("Stream : PURE SCIENCE\n");
  }
  else if (e >= 80 && s >= 80 && m >= 60) {
    printf("Stream : BIO. SCIENCE\n");
  }
  else {
    printf("Stream : COMMERCE\n");
  }
  return 0;
}
