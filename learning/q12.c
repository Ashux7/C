// recursion
#include<stdio.h>

int sum(int n);

int main(){
    int p;
    printf("Enter number: ");
    scanf("%d",&p);
    int x = sum(p);
    printf("%d",x);
    return 0;
}

int sum(int n){
    if (n == 0){return 0;}
    n = sum(n-1) + n;
    return n;
}