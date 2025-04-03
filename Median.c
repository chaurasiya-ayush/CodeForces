#include<stdio.h>
#include<limits.h>
void median();
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        median();
    }
}
void median(){
   int arr[3];
   int value =0;
   int min =INT_MAX;
   int max = INT_MIN;
   for(int i=0;i<3;i++){
       scanf("%d",&arr[i]);
       
      min = (arr[i]<min) ? arr[i]: min;
      max = (arr[i]> max )? arr[i] : max;
   }
   for(int i=0;i<3;i++){
       if(arr[i]!= min && arr[i] != max){
           printf("%d\n", arr[i]);
       }
   }
  
}