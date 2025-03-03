#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count=0;
    vector<int> freq(26, 0); // Frequency array for 'a' to 'z'

    for (char c : s) {
        if (c >= 'a' && c <= 'z') { // Only process lowercase letters
            freq[c - 'a']++;
        }
    }

    // Print character frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            count++;
        }
    }
  if(count%2==0){
      cout<<"CHAT WITH HER!";
  }
  else{
      cout<<"IGNORE HIM!";
  }
    return 0;
}
