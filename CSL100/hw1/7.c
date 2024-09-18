#include <stdio.h>
int main(){
    int a,b,count=0;
    printf("ENETR a:");
    scanf("%d",&a);
    printf("ENETR b:");
    scanf("%d",&b);
    for (int i = a; i <= b; i++)
    {
        for (int j = a; j <= b; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        
    }
    printf("%d",count);
    return 0;
}