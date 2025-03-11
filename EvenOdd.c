
#include <stdio.h>

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  int arr[x];
  int j=0;
  for(int i=1;i<=x;i++){
    if (i%2!=0){
        arr[j] = i;
       
    }
    else {
        arr[j+3] = i;
       
    }
    j++;
  }
for(int i=0;i<x;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
