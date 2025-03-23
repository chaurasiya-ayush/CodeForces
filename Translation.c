#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    for(int i=0;i<=strlen(str1);i++){
        if(str1[i] != str2[strlen(str2)-1-i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}