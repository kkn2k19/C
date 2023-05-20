/*
Write a program in C to take input in two matrices. Multiply these two matrices and store
the result in a third matrix. Print all the matrices in the matrix format. You will have to
check whether multiplication is possible or not.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
             printf("Enter element - [%d],[%d] : ", i, j);
             scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter second 3*3 matrix element: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
             printf("Enter element - [%d],[%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
    return 0;
}
