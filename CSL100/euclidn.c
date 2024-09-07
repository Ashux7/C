#include<stdio.h>
int primen(int n){
    int fac = 0;
    for(int i =2;i<=n;i++){
        if(n%i==0){fac+=1;}
    }
    if (fac==1){
        return n;
    }
    else{return 1;}
}

int primorial(int n){
    int pn=1;
    for(int i =1;i<=n;i++){
        int a = primen(i);
        pn = pn*a;
    }
    return pn;
}

int euclidean(int n){
    int en = primorial(n)+1;
    return en;
}

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    for(int i=2;i<=a;i++){
        euclidean(i);
    }
    return 0;
}