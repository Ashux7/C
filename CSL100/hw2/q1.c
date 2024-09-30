#include<stdio.h>
#include<math.h>
int isPrime(int n);
int LeftTrun(int m);
int RightTrun(int l);
int main(){
      int a;
      printf("ENTER NUMBER:");
      scanf("%d",&a);
      int r=a;
      if(LeftTrun(r)==1 && RightTrun(r)==1){
            printf("%d is both a Left and Right Truncatable Prime Number.",r);
      }
      else{
            if(LeftTrun(r)){
                  printf("%d is a Left Truncatable Prime Number.",r);
            }
            else if(RightTrun(r)){
                  printf("%d is a Right Truncatable Prime Number.",r);
            }
            else{
                  printf("%d is neither Left Truncatable nor Right Truncatable.",r);
            }
      return 0;
      }
}

int LeftTrun(int m){
       int p,r=m;
            while(m>0){
                  p++;
                  m/=10;
            }
      int power=pow(10,p-1);
      while(r>0){
             if(isPrime(r)==0){
                  return 0;
                  }
            r=r%(power);
            power/=10;
}
return 1;
}
int RightTrun(int l){
int c=10;
      while(l>0){
              if(isPrime(l)==0){
                        return 0;
                    }
              l=l/c;
              c=c*10;
              
}
return 1;
}
int isPrime(int n){
      if(n==2){
            return 1;
}
if(n<=1){
      return 0;
}
      for(int i=2;i<=n/2;i++){
                    if(n%i==0){
                              return 0;
                        }
            }
        return 1;
}
