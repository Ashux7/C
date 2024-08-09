#include<stdio.h>

float sqr(float side);
float circ(float radius);
float rect(float sideA , float sideB);

float main(){
    int choice;
    float side;
    float sideA,sideB;
    float radius;
    printf("Square : 1 , Circle : 2, Rectangle : 3 ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter side: ");
        scanf("%f",&side);
        printf("%f",sqr(side));
        break;
        case 2:
        printf("Enter radius: ");
        scanf("%f",&radius);
        printf("%f",circ(radius));
        break;
        case 3:
        printf("Enter first side:");
        scanf("%f",&sideA);
        printf("Enter second side:");
        scanf("%f",&sideB);
        printf("%f",rect(sideA,sideB));
        break;

    }
}

float sqr(float side){
    return side*side;
}
float rect(float sideA,float sideB){
    return sideA*sideB;
}

float circ(float radius){
    return 3.14*radius*radius;
}