#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--) {
		long long int x;
		long long val=0;
		cin>>x;
		for(int i=2; val<=x; i++) {
			val = (pow(2,i)-1);
			if(x%val == 0) {
				cout<< x/val<<endl;
				break;
			}
		}
	}
}




