#include<stdio.h>
void main(){
	int a = 5;
	int *ptr = &a;
	int **pptr = &ptr;
	printf("%d",**pptr);
}
