#include <stdio.h>
int main() {
    int money , flav;
    int icecr[flav];
    printf("Enter money , flav: ");
    scanf("%d %d",&money,&flav);
    for(int i = 0;i<flav;i++){
        printf("Enter amount of flavour %d :",i);
        scanf("%d",icecr[i]);
    }

    int left = 0,right = flav-1;
    while(left<right){
        if(icecr[left]+icecr[right] == money){
            printf("%d %d",left,right);
            return 0;
        }
        else if(icecr[left]+icecr[right] > money){
            left ++;
        }else{
            right--;
        }
    }
}