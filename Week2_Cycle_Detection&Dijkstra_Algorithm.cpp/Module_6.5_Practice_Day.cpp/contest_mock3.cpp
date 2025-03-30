#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
    while(getline(cin,s)){ 
    // string s;cin>>s;
    sort(s.begin(),s.end());
    string w;
    int n = s.size();
    for(int i =0;i<s.size();i++){
        if(s[i]!=' ') w+=s[i];
    }
    cout<<w<<endl;
    }
    return 0;
}