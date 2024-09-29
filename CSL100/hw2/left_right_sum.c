#include<stdio.h>
int findElement(int arr[], int a);
int main(){
    int n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
              printf("ENTER ELEMENT %d:",i);
              scanf("%d",&arr[i]);
              }
int b=findElement(arr,n);
    printf("%d\n",b);
return 0;
}
int findElement(int arr[], int a){
        for(int i=1;i<a;i++){
                 int Lsum=0,Rsum=0;
                for(int j=i-1;j>=0;j--){
                        Lsum=Lsum+arr[j];
                            }
              for(int j=i+1;j<a;j++){
                        Rsum=Rsum+arr[j];
                        }
                if(Lsum==Rsum){
                        return 1;
                    }
          }
return 0;
}

                
