#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int min = arr[0];
   int max = arr[0];
   for(int i=0;i<n;i++){
      if(arr[i]>max){
          max = arr[i];
          count++;
      } 
      if(arr[i]<min){
          min = arr[i];
          count++;
      }
   }
   printf("%d",count);
}
