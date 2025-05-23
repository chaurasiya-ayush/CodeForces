#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<vector<int>>arr(4,vector<int>(4));
	int n = 4,m=4;
	arr[0][0] = 4;
	arr[0][1] = 3;
	arr[0][2] = 5;
	arr[0][3] = 6;
	arr[1][0] = 2;
	arr[1][1] = 6;
	arr[1][2] = 0;
	arr[1][3] = 10;
	arr[2][0] = 0;
	arr[2][1] = 7;
	arr[2][2] = 6;
	arr[2][3] = 8;

	arr[3][0] = 3;
	arr[3][1] = 9;
	arr[3][2] = 0;
	arr[3][3] = 2;
	int flag =1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(arr[i][j]==0) {
				if(j==0) {
					flag =0;
				}
				else if(i==0) {
					arr[0][0] = 0;
				}
				else {
					arr[i][0] = 0;
					arr[0][j] =0;
				}
			}
		}

	}
	for(int i=1; i<n; i++) {
		for(int j=1; j<m; j++) {

			if(arr[i][0]==0 || arr[0][j]==0) {
				arr[i][j]=0;
			}
		}
	}
	if(arr[0][0]==0) {
		for(int l=0; l<n; l++) {
			arr[0][l] = 0;
		}
	}
	if(flag==0) {
		for(int l=0; l<m; l++) {
			arr[l][0] = 0;
		}
	}
	// printing
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}