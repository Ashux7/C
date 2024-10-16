#include<stdio.h>
int minCost(int arr[],int n);
int min(int a,int b);
int main(){
int n;
printf("ENTER SIZE:");
scanf("%d",&n);
int cost[n];
for(int i=0;i<n;i++){
      printf("ENTER ELEMENT %d:",i);
      scanf("%d",&cost[i]);
}
printf("MINIMUM COST=%d",minCost(cost,n));
return 0;
}
int minCost(int cost[],int n){
      if (n == 0)
            return 0;        
      if (n == 1) 
            return cost[0];  
      int minCost[n];
      minCost[0] = cost[0];
      minCost[1] = cost[1];
      for(int i=2;i<n;i++){
            minCost[i]=cost[i]+min(minCost[i-1],minCost[i-2]);
            }
      return min(minCost[n-1],minCost[n-2]);
}
int min(int a, int b){
          if(a>b){
                return b;
            }
         else if(b>a){
                      return a;
            }
}
              

