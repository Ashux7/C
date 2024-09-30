#include <stdio.h>
#include <stdbool.h>
bool check(int arr[], int n);
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
bool check(int arr[], int n) {
    int freq[1000] = {0}; 
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    bool freqSeen[1000] = {false}; 
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) { 
            if (freqSeen[freq[i]]) {
                return false;
            }
            freqSeen[freq[i]] = true;
        }
    }
    return true;
}

