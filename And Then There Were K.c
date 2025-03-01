
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      int x;
      scanf("%d",&x);
      int c = x;
      int j=1;
      int k;
      while(c!=0){
          c = c&(x-j);
          k=x-j;
          j++;
      }
      printf("%d\n",k);
  }

    return 0;
}