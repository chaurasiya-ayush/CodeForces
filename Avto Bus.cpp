#include <bits/stdc++.h>
using namespace std;
void avtoBus() {
	long long int n;
	cin>>n;
	if(n%2!=0 || n<4) {
		cout<<"-1"<<endl;
	}
	else{
	   long long  int maxValue = n/4;
	    long long int minValue = (n+5)/6;
	    
	    cout<<minValue<<" "<<maxValue<<endl;
	}
 
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		avtoBus();
	}
 
}