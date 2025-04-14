#include<stdio.h>
int cacakNumber();
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      if(cacakNumber()) printf("YES\n");
      else printf("NO\n");
    }
}
int cacakNumber(){
    long long int n,k,x;
    scanf("%lld %lld %lld",&n,&k,&x);
    long long int maxSum = (k*(2*n-k+1))/2;
    long long int minSum = (k*(k+1))/2;
    // printf("%lld %lld\n",minSum,maxSum);
    if(x>= minSum && x<=maxSum) return 1;
    else return 0;
}