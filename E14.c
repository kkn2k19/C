/*
14. Print the
following
Patteren
A
A B A
A B C B A
A B C D C B A
*/

int main()
{
    int i, j, n;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
        printf(" ");         //1 space
        char a = 'A';
        for(j=1; j<=i; j++){
            printf("%c", a);
            a++;
        }
        a=a-2;
        if(i>1){
            for(j=1; j<=i-1; j++){
                printf("%c", a);
                a--;
            }
        }
        printf("\n");  
    }
    return 0;
}
