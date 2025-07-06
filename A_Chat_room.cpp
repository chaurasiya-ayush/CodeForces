#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	string ansString = "hello";
	int k =0;
	for(int i=0; i<str.size(); i++) {
		if(str[i] == ansString[k]) {
			k++;
		}
		
	}
    if(k==5){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

