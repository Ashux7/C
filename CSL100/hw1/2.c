#include<stdio.h>
int main(){
    int n,b=0,c=0;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%10==0){
        printf("Error: Ending with zero.");
        return 0;
    }
    while(n>1){
        c = n%10;
        b = b*10 + c;
        n/=10;
    }
    printf("Reversed number is %d.",b);
    return 0;
}