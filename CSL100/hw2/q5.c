#include <stdio.h>
int main() {
    int arr[7];
    int invVector[6];
    printf("Enter 7 distinct non-negative integers:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++) {
        invVector[i] = 0; 
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                invVector[i]++;
            }
        }
    }
    printf("Inversion Vector:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", invVector[i]);
    }
    printf("\n");
    return 0;
}

