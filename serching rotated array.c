#include<stdio.h>
int searchArray(int n,int arr[],int target);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target ;
    scanf("%d",target);
    searchArray(n,arr,target);
}
int searchArray(int n,int arr[],int target){
int start = 0;
int end = n-1;
while(start<= end){
    int mid = (start + end )/2;
    if(target == arr[mid]) return mid;
    if(arr[mid]>= arr[start]){
        //left search
        if(target<=arr[mid] && target>= arr[start]){
            // binary search 
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    else{
        // right search
        if(target>=arr[mid] && target<= arr[end]){
            // binary search 
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        
    }
}
return -1;
}

