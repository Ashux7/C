# include<stdio.h>   //ye part is preprocessor director, ye hmesha likha jata h

// hmesha program int main function se start hota
int main(){
    int age = 13;
    char bruh = 'a';
    float agge = 12.22;

// inputting 
    int inputno;
    printf("Enter numeber: ");
    scanf("%d", &inputno); 


// format specifiers --- %d = int, %c = char , %f = float
    printf("age is %d \n",age);
    printf("bruh is %c \n",bruh);
    printf("agge is %f \n",agge);
    printf("input no is %d \n",inputno);
    return 0; // return zero error
}