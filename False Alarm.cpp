#include<bits/stdc++.h>
using namespace std;
string falseAlarm() {
	int n,x;
	cin>>n>>x;
	int leftIndex = 0;
	int rightIndex = n-1;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0; i<n; i++) {
		if(arr[i]==1) {
			leftIndex = i;
			break;
		}
	}
	for(int i=n-1; i>=0; i--) {
		if(arr[i] == 1) {
			rightIndex = i;
			break;
		}
	}
	if(x>=(rightIndex - leftIndex +1) ) return "YES";
	return "NO";
 
 
 
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cout<<falseAlarm()<<endl;
	}
}