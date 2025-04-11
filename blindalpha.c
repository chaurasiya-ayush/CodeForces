#include <stdio.h>

int main()
{
   char direction[2];
   scanf("%s",direction);
   char str[1000];
   scanf("%s",str);
   char row1[] = "qwertyuiop";
   char row2[] = "asdfghjkl;";
   char row3[] = "zxcvbnm,./";
  if(str[0]=='q' || str[]=='w' || str[]=='e' || str[]=='r' || str[]=='t' || str[]=='y' || str[]=='u' || str[]=='i' || str[]=='o'|| str[]=='p'){
      // checkin row 1;
      for(int i=0;i<strlen(row1);i++){
          if(row1[i]== str[0]){
              index = i;
              break;
          }
         
      }
      if(direction[0]=='R'){
              printf("%c",row1[index+1]);
          }
          else printf("%d",row1[index-1]);
  }
  else if(str[0]=='a' || str[]=='s' || str[]=='d' || str[]=='f' || str[]=='g' || str[]=='h' || str[]=='j' || str[]=='k' || str[]=='l'|| str[]==';'){
      // checkin row 2;
       for(int i=0;i<strlen(row2);i++){
          if(row2[i]== str[0]){
              index = i;
              break;
          }
         
      }
      if(direction[0]=='R'){
              printf("%c",row2[index+1]);
          }
          else printf("%d",row2[index-1]);
  }
  else if(str[0]=='z' || str[]=='x' || str[]=='c' || str[]=='v' || str[]=='b' || str[]=='n' || str[]=='m' || str[]==',' || str[]=='.'|| str[]=='/'){
      // checkin row 3;
       for(int i=0;i<strlen(row3);i++){
          if(row3[i]== str[0]){
              index = i;
              break;
          }
         
      }
      if(direction[0]=='R'){
              printf("%c",row3[index+1]);
          }
          else printf("%d",row3[index-1]);
  }



    return 0;
}