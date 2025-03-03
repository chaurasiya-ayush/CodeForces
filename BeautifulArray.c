#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        long long int n,k,b,s;
        scanf("%lld %lld %lld %lld",&n,&k,&b,&s);
        if((b*k>s) || s > b * k + (n-1) * (k-1) ){
            printf("-1\n");
        }
        else{
            
        long long int arr[n];
        arr[0] = b*k;
        printf("%lld",arr[0]);
        int remaining = s-b*k;
        for(int a =1;a<n;a++){
            if(remaining<=k-1){
                arr[a] = remaining;
                remaining = 0;
            }
            else{
                arr[a] = k-1;   
            remaining = remaining-k+1;
            }
            printf(" %lld ",arr[a]);
        }
        printf("\n");
        }
    }

    return 0;
}