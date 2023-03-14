/*Write a program in C to generate all the prime numbers from M to N.(M<N)
Test Data :
Enter M and N: 10 23
Expected Output :
[11] [13] [17] [19] [23].*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int M, N;
    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);

    printf("Prime numbers between %d and %d are: ", M, N);

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            printf("[%d] ", i);
        }
    }

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
