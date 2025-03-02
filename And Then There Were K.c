
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      int x,c=1;
      scanf("%d",&x);
        while(x>c){
            c = 2*c;
        }
        if(c==x){
            printf("%d\n",c-1);
        }else{
            
     printf("%d\n",(c/2)-1);
        }
     
  }

    return 0;
}


// Not an optimise approach
// #include <stdio.h>

// int main()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//       int x;
//       scanf("%d",&x);
//       int c = x;
//       int j=1;
//       int k;
//       while(c!=0){
//           c = c&(x-j);
//           k=x-j;
//           j++;
//       }
//       printf("%d\n",k);
//   }

//     return 0;
// }