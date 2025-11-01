#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	double a,b=0,maxx=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		b+=a;
		maxx=max(maxx,b/i);
	}
	cout<<maxx;
// }