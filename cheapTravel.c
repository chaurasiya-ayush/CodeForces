
#include <stdio.h>
#include<limits.h>
int main()
{
   int n,m,a,b;
   scanf("%d %d %d %d",&n,&m,&a,&b);
   int value = INT_MAX;
   int secondPrice;
   for(int i=0;i<=(n/m)+1;i++){
       int price = b*i;
       int noRides = n-m*i;
       if(noRides>0){
       secondPrice = noRides*a;
       }
       else{
           secondPrice = 0;
       }
       if(value>price+secondPrice){
           value = price + secondPrice;
       }
   }
    printf("%d ",value);
 
    return 0;
}