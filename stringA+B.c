#include <stdio.h>
#include<string.h>
 
int main()
{
  char str[4];
  scanf("%s",str);
  str[0] = str[0]- '0';
  str[2] = str[2]- '0';
  printf("%d",str[0]+str[2]);
    return 0;
}