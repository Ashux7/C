#include<stdio.h>
int main(){
    char name[30];
    char roll[20];
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter roll: ");
    scanf("%s",&roll);
    printf("%s \n",name);
    printf("%s",roll);

    return 0;
}