
 
#include <stdio.h>
 
int main()
{
   int n;
       int suma=0,sumb=0,sumc=0;
   char flag=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       int a,b,c;
       scanf("%d %d %d",&a,&b,&c);
        suma += a;
        sumb +=b;
       sumc +=c;
 
       if(suma==0 && sumb==0 && sumc==0){
           flag=1;
       }
   }
   (flag)?printf("YES"):printf("NO");
 
    return 0;
}