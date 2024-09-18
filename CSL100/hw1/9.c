#include<stdio.h>
int main(){
    int sum=0;
    for(int i=100;i<999;i++){
        for(int n=5;n<60;n++){
            if(17*n==i){
                sum+=i;       
                break;
            }
        }
    }
    printf("%d",sum);
    return 0;
}