#include<stdio.h>

void printhw(int n);

int main(){
    int n = 5;
    printhw(5);
}

void printhw(int n){
    if(n < 1){
        return;
    }
    printf("HEHE \n");
    printhw(n-1); // recursion
}