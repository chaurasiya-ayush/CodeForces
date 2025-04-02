#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int po =1;
    int sum1=0,sum2=0;
    for(int i=strlen(str1)-1;i>=0;i--){
        sum1 +=  (str1[i]-'0')*po;
         sum2 += (str2[i]-'0')*po;
        po *= 2;
    }
    int value = sum1^sum2;
    unsigned long long int powd = 1;
    unsigned long long int rev =0;
    int digit =0;
        for(int i=0;i<strlen(str1);i++){
            if(value==0){
                digit++;
            }
        long long int c = value%2;
        rev += c*powd ;
        powd *= 10;
        value /= 2;
       
    }
    for(int i=1;i<=digit;i++){
        printf("0");
    }
    printf("%llu ",rev);
    
}
// big int ka concept nhi atta isliye solve nhi hua 
// bevakufi kr di optimized code ye tha hi nhi
