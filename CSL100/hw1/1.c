#include<stdio.h>
int main(){
	float l,w,h,r,hc,rs;
	printf("Length, Width and Height of cuboid in float: ");
	scanf("%f%f%f",&l,&w,&h);
	printf("Radius and Height of cylinder in float: ");
	scanf("%f%f",&r,&hc);
	printf("Radius of sphere in float: ");
	scanf("%f",&rs);
	printf("Volume of cuboid: %.2f \n",l*w*h);
	printf("Volume of cylinder: %.2f \n",3.14*r*r*hc);
	printf("Volume of sphere: %.2f \n",(4*3.14*rs*rs*rs)/3);
	return 0;
}
