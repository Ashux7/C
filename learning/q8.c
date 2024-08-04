#include<stdio.h>

int main(){
    int a=1;
    while(a>0){
        int s;
        printf("Enter number: ");
        scanf("%d",&s);
        if(s%2==1){
            printf("Odd number entered.");
            break;
        }
    }
    return 0;
}