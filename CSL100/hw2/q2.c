#include<stdio.h>
int rev(int a);
int differev(int m);
int main(){
        int n;
        printf("ENTER THE NUMBER:");
        scanf("%d",&n);
        if(rev(n)+differev(n)==n){
                              printf("VERIFIED");
                        }
        else{
                        printf("NOT VERIFIED");
                          }
return 0;
}
int rev(int a){
        int c=0;
        while(a>0){
                    int b=a%10;
                    c=c*10+b;
                    a/=10;
                }
return c;
}
int differev(int m){
            if(m>rev(m)){
                        return m-rev(m);
                      }
            else{
                      return rev(m)-m;
                  }
}

