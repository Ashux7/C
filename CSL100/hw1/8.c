// #include<stdio.h>
// int main(){
//     int count=0,n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=j;k<n;k++){
//                 int a= (j*j)+(k*k);
//                 if(a==i){
//                     count++;
//                 }
//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main(){
    int n,count;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int a=1; a<=(sqrt(i)) ; a++){
            for(int b=1 ; a<= sqrt(i);b++){
                if(pow(a,2) + pow(b,2) == i){
                    count++;
                }
            }
        }
    }
}