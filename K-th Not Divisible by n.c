#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
 long long int x,y;
 scanf("%lld %lld",&x,&y);
 int value=-1;
 int second =0;
 while(value!=0){
     value = y/x;
     value = value - second;
      y = y+ value;
      second += value;
 }
 printf("%lld\n", y);
  }
    return 0;
}