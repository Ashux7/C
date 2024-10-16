#include<stdio.h>

int sdig(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n%10 + sdig(n/10);
    }
    
}

void main(){
    int x = sdig(275);
    printf("%d",x);
}