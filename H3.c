/*
Write a program in C to take two arrays as input. Pass those arrays in a function, named as
isEqual() and check whether those arrays are equal or not.
*/

#include <stdio.h>

int isEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;  // Arrays are not equal
        }
    }
    return 1;  // Arrays are equal
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    int result = isEqual(arr1, arr2, size);
    if (result) {
        printf("The arrays are equal.\n");
    } else {
        printf("The arrays are not equal.\n");
    }
    return 0;
}
