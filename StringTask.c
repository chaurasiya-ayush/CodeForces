#include <stdio.h>
#include<string.h>
int main()
{
  char str[100];
  scanf("%s",str);
  for(int i=0;i<strlen(str);i++){
          if(str[i]<97){
              str[i] = str[i]+32;
          }
      if(str[i] != 'a' && str[i] != 'e'  && str[i] != 'i'   && str[i] != 'o'   && str[i] != 'u'   ){
          printf(".%c",str[i]);
      }
  }

    return 0;
}