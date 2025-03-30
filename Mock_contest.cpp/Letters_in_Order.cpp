#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  set<char>st;
  for(char c : s)
    st.insert(c);

    for(auto i : st)
    cout<<i;
    return 0;
}