#include<bits/stdc++.h>
using namespace std;
void squareYear() {
	int n;
	cin>>n;
	int root = sqrt(n);
	if(root*root == n) {
		int firstVal = root/2;
		int secondVal = root - root/2 ;
		cout<<firstVal<<" "<<secondVal<<endl;
	}
	else {
		cout<<"-1"<<endl;
	}
}
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		squareYear();
	}
}
