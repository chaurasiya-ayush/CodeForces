 
#include <iostream>
using namespace std;
int main()
{
   long long t , a, b;
   cin>>t ;
   while(t--){
       cin>>a>>b;
       if(a==b){
           cout<<0<<endl;
       }
       else if(a%b==0||b%a==0)
       {
           cout<<1<<endl;
       }
       else {
           cout<<2<<endl;
       }
   }
 
    return 0;
}