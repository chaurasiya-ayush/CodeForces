#include <stdio.h>
#include <string.h>
int main() {
    int sum=0,sum2=0;
    char name[100];
    fgets(name,sizeof(name),stdin);
    char name2[100];
      fgets(name2,sizeof(name2),stdin);
     for(int i=0;i<=strlen(name)-2;i++){
        if(name[i]<97){
            name[i] = name[i]+32;
        } 
        if(name2[i]<97){
            name2[i] = name2[i]+32;
        } 
     }
  for(int j=0;j<=strlen(name)-2;j++){
            sum += name[j];
  }
  for(int j=0;j<=strlen(name2)-2;j++){
            sum2 +=name2[j];
       
  }
if(sum>sum2){
    printf("1\n");
}
else if(sum == sum2){
    printf("0\n");
}
else if(sum<sum2){
    printf("-1\n");
}
    return 0;
}
