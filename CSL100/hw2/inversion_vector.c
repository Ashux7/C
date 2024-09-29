#include <stdio.h>
#define SIZE 7
int main() {
    int arr[SIZE];
    int invVector[SIZE - 1];
    printf("Enter 7 distinct non-negative integers:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        invVector[i] = 0; 
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                invVector[i]++;
            }
        }
    }
    printf("Inversion Vector:\n");
    for (int i = 0; i < SIZE - 1; i++) {
        printf("%d\t", invVector[i]);
    }
    printf("\n");
    return 0;
}

