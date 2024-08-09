#include<stdio.h>

void gender(char gen);

int main(){
    char gen;
    printf("Enter M for male and F for female: ");
    scanf("%c",&gen);
    gender(gen);
    return 0;
}

void gender(char gen){
    if(gen=='M'){
        printf("male");
    }
    else if(gen == 'F'){
        printf("female");
    }
    else{
        printf("wrong input");
    }
}
