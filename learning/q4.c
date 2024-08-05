#include<stdio.h>

int main(){
    int age;
    char gender;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age<18){
        printf("Baccha h school jaa \n");
    }
    else if(age>=18 && age<50){
        printf("adult h hmm \n");
    }
    else{
        printf("Boodhe hogye ho araam karo \n");
    }

// ternary operator
    printf("Enter your gender(M/F):");
    scanf("%c", &gender);
    gender == 'm' ? printf("Admi") : printf("Aurat");
    return 0;
}