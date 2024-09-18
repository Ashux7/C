#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,D;
    float r1,r2;
    printf("Enter coefficients: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        printf("Not a quadratic equation.");
        return 0;
    }
    D = (b*b) - (4*a*c);
    if(D<0){
        printf("No real roots.");
    }
    else if(D>0){
        r1 = (((-1)*b)+ pow(D,0.5))/(2*a);
        r2 = (((-1)*b)- pow(D,0.5))/(2*a);
        printf("%f %f",r1,r2);
    }
    else if(D==0){
        r1 = (((-1)*b))/(2*a);
        printf("%f",r1);
    }
    return 0;
}