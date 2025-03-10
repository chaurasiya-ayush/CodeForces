#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        int x;
        int temp=0;
        int sum=0;
        scanf("%d",&x);
        int copy=x;
        while(copy!=0){
            int c = copy%10;
            copy /=10;
            if(c!=0){
                temp++;
            }
        }
        printf("%d\n",temp);
        int j=0;
        int count=0;
        int powr = 1;
        while(x!=0){
            int c = x%10;
            sum = c*powr;
            if(sum!=0){
                printf("%d ",sum);
            }
            x = x/10;
            count++;
            powr *=10;
        }
        printf("\n");
    }
    return 0;
}
// its working on gdb but not in codeforces compiler

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int count=0;
//     for(int i=1;i<=n;i++){
//         int x;
//         int temp=0;
//         int sum=0;
//         scanf("%d",&x);
//         int copy=x;
//         while(copy!=0){
//             int c = copy%10;
//             copy /=10;
//             if(c!=0){
//                 temp++;
//             }
//         }
//         printf("%d\n",temp);
//         int j=0;
//         int count=0;
//         while(x!=0){
//             int c = x%10;
//             sum = c*pow(10,count);
//             if(sum!=0){
//                 printf("%d ",sum);
//             }
//             x = x/10;
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }