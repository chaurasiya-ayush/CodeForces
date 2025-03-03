#include <iostream>
using namespace std;
 
string abbreviate(string word) {
	int length = word.length();
	int low = 0, upp = 0;
	for (char ch : word) {
		if (ch >= 'a' && ch <= 'z') low++;
		else if (ch >= 'A' && ch <= 'Z') upp++;
	}
 
	for (char &ch : word) {
		if (upp > low && ch >= 'a' && ch <= 'z') ch -= 32;
		else if (low >= upp && ch >= 'A' && ch <= 'Z') ch += 32;
	}
 
 
	return word;
}
 
int main() {
	string word;
	cin >> word;
	cout << abbreviate(word) << endl;
	return 0;
}