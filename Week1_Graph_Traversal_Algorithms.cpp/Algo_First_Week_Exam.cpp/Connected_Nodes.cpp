#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    vector<int>adj_list[n];
    while(e--){
        int a,b;cin>>a>>b;
         adj_list[a].push_back(b);
         adj_list[b].push_back(a);
    }
    int q;cin>>q;
    while(q--){
        int n;cin>>n;vector<int>v;
        for(int val:adj_list[n]){
         v.push_back(val);
        }
        if(v.empty()) cout<<"-1";
        else {
            sort(v.begin(),v.end(),greater<int>());
            for(int val: v){
                cout<<val<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}