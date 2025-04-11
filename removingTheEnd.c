#include<stdio.h>
int removeEnd();
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        removeEnd();
    }
}
int removeEnd(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int preSum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        preSum[i+1] =preSum[i];
        if(arr[i]>0)  preSum[i+1] = preSum[i] + arr[i];
    } 
        long long int ans = preSum[n] ;
        int suf =0;
        for(int i = n-1;i>=0;i--){
            if(arr[i]<0) suf += -arr[i];
            if(preSum[i]+suf>ans) ans = preSum[i] + suf;
            
        }
        printf("%lld",ans);
    return 0;
}