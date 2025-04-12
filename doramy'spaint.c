#include<stdio.h>
int doremyPaint();
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(doremyPaint()) printf("YES\n");
        else printf("NO\n");
        
    }
}
int doremyPaint(){
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    int freq[100001]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (freq[arr[i]] == 0) count++;
        freq[arr[i]]++;
    }
    
    if(count>=3)return 0;
    for(int i=0;i<n;i++){
       if(freq[arr[i]]<n/2) return 0;
    }
    return 1;
    
}