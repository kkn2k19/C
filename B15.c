/*An ICSE school displays a notice on the school notice board regarding admission in Class
XI for choosing stream according to marks obtained in English, Maths and Science in
Class 10 Council Examination.
Marks obtained in different subjects Stream
Eng, Maths and Science >= 80% Pure Science
Eng and Science >= 80%, Maths >= 60% Bio. Science
Eng, Maths and Science >= 60% Commerce
Print the appropriate stream allotted to a candidate. Write a program to accept marks in
English, Maths and Science from the console.*/

#include <stdio.h>

int main ()
{
    float eng, maths, sci, percentage, eng_sci;
    printf("Provide your marks in eng, maths, sci : ");
    scanf ("%f %f %f", &eng, &maths, &sci);
    percentage = (((eng + maths + sci)/300)*100);
    printf("percentage : %f\n", percentage);
    eng_sci = (((eng + sci)/200)*100);

    if (percentage >=80){
        printf("Pure Science\n");
    }
    else if (eng_sci>=80 && maths>=60){
        printf("Bio. Science\n");
    }
    else {
        printf ("Commerce\n");
    }
    return 0;
}