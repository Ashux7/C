#include <stdio.h>

int main(){
    float marks;
    printf("Enter the Number: ");
    scanf("%f", &marks);

    if(marks < 0 || marks > 100){
        printf("Invalid marks.");
    }
    else{
        switch((int)marks / 10){
            case 10:
            case 9:
            case 8:
                if(marks >= 86){
                    printf("A+");
                }
                else{
                    printf("A-");
                }
                break;
            case 7:
                if(marks == 70){
                    printf("B+");
                }
                else{
                    printf("A-");
                }
                break;
            case 6:
            case 5:
                if(marks>=56){
                    printf("B+");
                }
                else{
                    printf("B-");
                }
                break;
            case 4:
                if(marks==40){
                    printf("C");
                }
                else{
                    printf("B-");
                }
                break;
            case 3:
            case 2:
                if(marks>=26){
                    printf("C");
                }
                else{
                    printf("F");
                }
                break;
            case 1:
            case 0:
                printf("F");
                break;
        }
    }
    return 0;
}