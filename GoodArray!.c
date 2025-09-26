#include <stdio.h>
int checkNum(int arr[],int x){
    int count=0;
    for(int i=0;i<x-1;i++){
        if((arr[i]%2==0 && arr[i+1]%2==0)||(arr[i]%2!=0 && arr[i+1]%2!=0)){
          count++;  
        }
    }
    printf("%d\n",count);
    
}




int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        int arr[x];
        for(int j=0;j<x;j++){
            scanf("%d",&arr[j]);
        }
        checkNum(arr,x);
        
    }
}
