#include<stdio.h>

void pg(char fname[30],char lname[30], char hobby[30]);

int main(){
    char fname[30],lname[30],hobby[30];
    printf("Enter first name: ");
    scanf("%s",&fname);
    printf("Enter last name: ");
    scanf("%s",&lname);
    printf("Enter hobby: ");
    scanf("%s",&hobby);
    pg(fname,lname,hobby);
    return 0;
}

void pg(char fname[30], char lname[30], char hobby[30]){
    printf("Hi, %s %s. Nice to hear that your hobby is %s", fname,lname,hobby);
}