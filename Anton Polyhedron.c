#include<stdio.h>
#include<string.h>
int geometry(int*);
int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    for(int i=0;i<n;i++){
     geometry(&sum);
    }
    printf("%d",sum);
}
int geometry(int *sum){
        char str[15];
    scanf("%s",str);
    if(str[0]=='T') *sum += 4;
    else if(str[0]=='C')  *sum+= 6;
    else if(str[0]=='O') *sum += 8;
    else if(str[0]=='D') *sum+= 12;
    else if(str[0] == 'I') *sum += 20;
}
