#include<stdio.h>

int main(){
    int choice;
    printf("Enter a number:");
    scanf("%d",&choice);
    if(choice % 2 == 0){
        printf("%d is an even number.", choice);
    }
    else{
        printf("%d is a odd number.",choice);
    }
    return 0;
}