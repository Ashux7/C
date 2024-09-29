#include <stdio.h>
#include <stdlib.h>
#define MAX_FLAVORS 100
int main() {
    int totalMoney, numFlavors;
    printf("Enter the total money: ");
    scanf("%d", &totalMoney);
    printf("Enter the total flavors of ice-cream: ");
    scanf("%d", &numFlavors);
    int prices[MAX_FLAVORS];
    printf("Enter the prices of the ice-cream flavors:\n");
    for (int i = 0; i < numFlavors; i++) {
        scanf("%d", &prices[i]);
    }
    int *indexMap = (int *)calloc(totalMoney + 1, sizeof(int)); 
    for (int i = 0; i < numFlavors; i++) {
        int neededPrice = totalMoney - prices[i];
        if (neededPrice >= 0 && indexMap[neededPrice] != 0) {
            printf("Indices of the flavors chosen: %d and %d\n", indexMap[neededPrice] - 1, i);
            free(indexMap); 
            return 0; 
        }
        if (prices[i] <= totalMoney) {
            indexMap[prices[i]] = i + 1; 
        }
    }
    
    free(indexMap); 
    printf("No valid pairs found.\n");
    return 0;
}

