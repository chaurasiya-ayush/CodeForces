
#include<stdio.h>
int min(int a,int b,int c){
    int min=a;
    min = (b<min)?b:min;
    min = (c<min)?c:min;
    return min;
 }
 int main(){
     int n,k,l,c,d,p,nl,np;
     scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
     int ans = min(((k*l)/nl),(c*d),(p/np));
     printf("%d",ans/n);
 }