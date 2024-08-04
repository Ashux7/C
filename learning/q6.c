#include<stdio.h>
int main(){
    int n;
    int s = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i =1 ; i<=n ;i++){
        s = s + i;
        printf("%d \n",(n-i+1));
    }
    printf("Sum of first %d number is : %d",n,s);
}