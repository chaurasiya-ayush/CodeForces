#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string str1, str2, str;
	cin >> str1;
	cin >> str2;
	cin >> str;
	if((str1.length()+str2.length())!=str.length()){
	    printf("NO\n");
	}
	else{
	int freq[101]= {0};
	int freq2[101]= {0};
	
	for(int i=0; i<str1.length(); i++) {
		freq[str1[i]-'A']++;
	}
	for(int i=0; i<str2.length(); i++) {
		freq[str2[i]-'A']++;
	}
	for(int i=0; i<str.length(); i++) {
		freq2[str[i]-'A']++;
	}
	int j=0;
	for( j=0;j<100;j++){
	    if(freq[j]!=freq2[j]){
	        printf("NO\n");
	    break;
	    }
	}
    if(j==100) printf("YES\n");
	    
	}
	return 0;
}