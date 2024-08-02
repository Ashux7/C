// calc area of a square whose side is given

#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("Enter side : ");
    scanf("%d",&side);
    int power = pow(side,2);
    printf("Area of square is : %d ", power);
    return 0;
}