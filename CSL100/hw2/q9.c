#include <stdio.h>

int check(int arr[], int n);
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element-%d: ", i);
        scanf("%d", &arr[i]);
    }
    if (check(arr, n)) {
        printf("True\n");  
    } else {
        printf("False\n"); 
    }
    return 0;
}
int check(int arr[], int n) {
    int freq[1000] = {0}; 
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int freqSeen[1000] = {0}; 
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) { 
            if (freqSeen[freq[i]]) {
                return 0;
            }
            freqSeen[freq[i]] = 1;
        }
    }
    return 1;
}

