#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        int arr[x];
        for(int j=0;j<=x-1;j++){
            scanf("%d",&arr[j]);
        }
        sort(arr, arr + x);
        if(arr[0]==arr[x-1]){
            printf("NO\n");
        }
        else{
        rotate(arr, arr + x - 1, arr + x);
        printf("YES\n");
        for(int k=0;k<=x-1;k++){
          cout<<arr[k]<<" ";
        }
        cout<<"\n";
        }
    }
}