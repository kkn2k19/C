/*
Write a program in C to rotate an array by N positions.
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/

#include <stdio.h>

void rotate(int arr[], int n, int p) {
    int temp[p];

    // Store the first p elements in a temporary array
    for (int i = 0; i < p; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by p positions
    for (int i = p; i < n; i++) {
        arr[i - p] = arr[i];
    }

    // Copy the temporary array back to the end of the original array
    for (int i = 0; i < p; i++) {
        arr[n - p + i] = temp[i];
    }
}

int main() {
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = 4;

    printf("The given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("From %dth position the values of the array are: ", p);
    for (int i = p; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Before %dth position the values of the array are: ", p);
    for (int i = 0; i < p; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotate(arr, n, p);

    printf("After rotating from %dth position the array is: \n", p);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
