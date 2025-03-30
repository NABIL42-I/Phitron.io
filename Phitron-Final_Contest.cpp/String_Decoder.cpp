#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string w;
        for(int i =0;i<s.size();i+=2){
            char ch =s[i];
            int di = s[i+1]-'0';
            for(int j = 0;j<di;j++) w+=ch;
        }
      cout<<w<<endl;
    }
    return 0;
}
