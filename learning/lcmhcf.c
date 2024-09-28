#include<stdio.h>

int hcf(int a, int b){
    int min,mx,fac;
    if (a<b){
        min = a;
        mx = b;
    }
    else{
        min = b;
        mx = a;
    }
    for(int i=min;i>1;i--){
        if(min%i==0){
            for(int j = mx;j>1;j--){
                if(mx%j==0){
                    if(j==i){
                        return i;
                    }
                    }
            }
        }
    }

}

int lcm(int a, int b){
    int lcm = (a*b)/(hcf(a,b));
    return lcm;
}

int hcf_rec(int a, int b){
    int max,min;
    if(a>=b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    if((max % min)==0){
        return min;
    }
    else{
        int hcf = hcf_rec(max,max%min);
    }
}
int main(){
    int a,b;
    printf("Enter number: ");
    scanf("%d %d",&a,&b);
    int HCF = hcf(a,b);
    printf("HCF is %d. \n",HCF);
    int LCM = lcm(a,b);
    printf("LCM is %d. \n",LCM);

    int hcfrec = hcf_rec(a,b);
    printf("HCF by recursion is %d.",hcfrec);
    return 0;
}