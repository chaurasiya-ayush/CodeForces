#include <stdio.h>
 
int main()
{
   int a,b,c,max;
   scanf("%d %d %d",&a,&b,&c);
   int expr1 = a+(b*c);
   int expr3 = c + (a*b);
   int expr4 = a*(b+c);
   int expr6 = c*(b+a);
   int expr7 = a*b*c;
   int expr8 = a+b+c;
   max = expr1;
   max = (expr3>max)?expr3:max;
   max = (expr4>max)?expr4:max;
   max = (expr6>max)?expr6:max;
   max = (expr7>max)?expr7:max;
   max = (expr8>max)?expr8:max;
 
   printf("%d",max);
 
    return 0;
}