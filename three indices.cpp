#include<bits/stdc++.h>
using namespace std;
int threeIndices() {
	int n;
	cin>>n;
	int store1 = -1;
	int store2 = -1;
	vector<int>arr(n);
	for(int &x : arr) {
		cin >> x;
		if(x>n) {
			cout<<"-1"<<endl;
			return -1;
		}
	}

	for(int i=1; i<n-1; i++) {
		store1 = -1;
		store2 = -1;
		for(int j=0; j<i; j++) {
			if(arr[j]<arr[i]) store1 = j;
		}
		for(int j=i+1; j<n; j++) {
			if(arr[j]< arr[i]) store2 = j;
		}
		if(store1 != -1 && store2 != -1) {
		    cout<<"YES"<<endl;
			cout<<store1+1<<" "<<i+1<<" "<<store2+1<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return -1;
}
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		threeIndices();
	}
}