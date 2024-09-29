#include<stdio.h>
int primeyn(int a){
    int fac = 0;
    for(int i = 2;i<a;i++){
        if(a%i==0){
            fac+=1;
        }
    }
    if (fac == 0){
        return 1;
    }
    else {
        return 0;
    }
}

void main(){
    
    
}