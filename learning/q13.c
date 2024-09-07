// factorial
#include<stdio.h>
int fact(int n){
    if (n==0){return 1;}
    n = n*fact(n-1);
    return n;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}