#include<stdio.h>

// // pattern 1
// void main(){
//     int rows = 5;
//     for(int i = 1;i<=rows;i++){
//         for(int j = 1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// // pattern 2
// void main(){
//     int rows = 5;
//     for(int i = rows;i>0;i--){
//         for(int j = 1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// // pattern 3
// void main(){
//     int rows = 5;
//     for(int i = 1;i<=rows;i++){
//         for(int j = 0;j<rows-i;j++){
//             printf(" ");
//         }
//         for(int k = 1; k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// pattern 4
void main(){
    int rows = 5;
    for(int i=1;i<=rows;i++){
        for(int j = rows-i;j>0;j--){
            printf(" ");
        }
        for(int k = 1;k<=rows;k++){
            printf("* ");
        }
        printf("\n");
    }
}

// // format of patterns
// void main(){
// int rows =5;
// for(int i=0;i<=rows;i++){
//   for(int g=0;g<=2*(rows-i);g++){
//     printf(" ");}
//  for(int j=0;j<i;j++){
//     printf("* ");}
//  printf("\n");}}

