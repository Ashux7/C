#include<stdio.h>
int checkprime(int a);
int main(){
    int n,m=0;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    for(int i=2; i<=n;i++){
        for(int j=2; j<=n; j++){
            if(i+j==n){
                if(checkprime(i)){
                    if(checkprime(j)){
                        m++;
                    }
                }
            }
        }
    }
    if(m!=0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
int checkprime(int a){
    if(a==2){
        return 1;
    }
    if(a<=1){
        return 0;
    }
    for(int k=2;k<a;k++){
        if(a%k==0){
            return 0;
        }
        return 1;
    }
}