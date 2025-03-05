#include<stdio.h>
int main(){
    int n;
    float sum=0;
    scanf("%d",&n);
      //code
       for(int i=1;i<=n;i++){
           int x;
           scanf("%d",&x);
           sum+=x;
       }
      printf("%0.12f",sum/n);
}