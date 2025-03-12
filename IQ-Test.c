
#include<stdio.h>
int main(){
int n,ans,count=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    
}
for(int i=0;i<n;i++){
    if(arr[0]%2 !=arr[i]%2){
        ans =i+1;
        count++;
    }
}
if(count>1){
    printf("1");
}
else{
    printf("%d",ans);
}
 
}