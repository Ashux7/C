#include<stdio.h>

int main(){
    printf("Using for loop: \n");
    for(int i =1 ; i<=5 ; i++){
        printf("Hello %d \n",i);
    }
    printf("Using while loop: \n");
    int a = 1;
    while(a<=5){
        printf("Hello %d \n",a);
        a++;
    }
    printf("Using do while loop: \n");
    int dw = 1;
    do{
        printf("Hello %d \n",dw);
        dw++;
    }while(dw<=5);
    return 0;
}