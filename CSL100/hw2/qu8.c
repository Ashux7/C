#include <stdio.h>
void rearrange(int arr[], int n, int x);
int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element x: ");
    scanf("%d", &x);
    rearrange(arr, n, x);
    printf("Rearranged array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void rearrange(int arr[], int n, int x) {
    int low = 0;      
    int high = n - 1; 
    while (low < high) {
        while (arr[low] < x) {
            low++;
        }
        while (arr[high] > x) {
            high--;
        }
        if (low < high) {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            int temp = arr[i];
            arr[i] = arr[low]; 
            arr[low] = temp;
            break;
        }
    }
}

