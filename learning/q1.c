// calc area of a square whose side is given

#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("Enter side : ");
    scanf("%d",&side);
    int power = side*side ;
    printf("Area of square is : %d ", side**2);
    return 0;
}