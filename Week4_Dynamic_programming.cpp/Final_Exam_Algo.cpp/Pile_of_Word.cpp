#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s,w;cin>>s>>w;
        if(s.size()!=w.size()){  cout<<"NO\n"; continue;}
        sort(s.begin(),s.end());
        sort(w.begin(),w.end());
        if(s==w) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Function to check if two words are anagrams (Pile of Word) using frequency counts
bool areAnagrams(const string& s1, const string& s2) {
    // If lengths are different, they cannot be anagrams
    if (s1.length() != s2.length()) 
        return false;

    // Frequency arrays for characters 'a' to 'z'
    int freq1[26] = {0}, freq2[26] = {0};

    // Count the frequency of characters in both strings
    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    // Compare the frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;  // Read two words for each test case
        if (areAnagrams(s1, s2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
