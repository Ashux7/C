#include<stdio.h>
int main(){
int arr[7],count=0;
for(int i=0;i<7;i++){
      printf("ENTER ELEMENT %d:",i);
      scanf("%d",&arr[i]);
}
for(int i=0;i<7;i++){
      for(int j=i+1;j<7;j++){
                  if(arr[i]>arr[j]){
                              printf("(%d,%d)\t",i,j);
                              count++;
                      }
                  else{
                          continue;
                      }
            }
    }
if(count==0){
      printf("No inversion here !");
      }
return 0;
}
