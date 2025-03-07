#include<stdio.h>
int main(){
    int n,value=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        int arr[x];
        for(int j=0;j<x;j++){
            scanf("%d",&arr[j]);
        }
        if(x==3 && arr[1]!=arr[0] && arr[1]!=arr[2]){
            printf("2\n");
        }
        else{
            
        for(int k=0;k<x;k++){
            if(arr[k]==arr[k+1]){
                value = arr[k];
                break;
            }
        
        }
        for(int m=0;m<x;m++){
            if(arr[m]!=value){
                printf("%d\n",m+1);
            }
        }
        
        }
    }
}