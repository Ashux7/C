#include <stdio.h>
int prime(int a);
int main(){
    int n;
    printf("enter number= ");
    scanf("%d", &n);
    int a = 2,r = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            while (prime(a)==0) {
                a++;
            }
            printf("%d\t",a);
              a++;
             r++;
}
    printf("\n");
    }
return 0;
}

int prime(int a) {
int j=0;
for(int i=2;i<a;i++){
    if(a%i==0){j++;}
}
if(j==0){
    return 1;
    }
else{
    return 0;
    }
}