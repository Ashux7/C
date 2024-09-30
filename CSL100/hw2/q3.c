#include<stdio.h>
int politeFunc(int a);
int main(){
          int n;
          printf("ENTER NUMBER:");
          scanf("%d",&n);
          if(politeFunc(n)==0){
                      printf("I AM RUDE!\n");
                  }
    return 0;
}
int politeFunc(int a){
        int count=0;
         for(int n=1;n<a;n++){
                  for(int k=0;k<a;k++){
                                  int b=(k*n)+((k*(k-1))/2);
                                  if(b==a){
                                                        for(int i=0;i<k;i++){
                                                                    printf("%d\t",n+i);
                                                                    count++;
                                                              }   
                                                                printf("\n");
                                                   }
                                    else{
                                          continue;
                                            }
                                  }
                  }
return count;                      
}







