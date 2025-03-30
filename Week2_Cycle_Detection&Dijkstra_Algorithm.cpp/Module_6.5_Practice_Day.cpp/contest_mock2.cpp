#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        while(n--){
            int val;cin>>val;
            mp[val]++;
        }
        int p;
        for(auto it = mp.begin();it!=mp.end();it++){
         if(it->second %2 != 0){
          p = it->first;
         }
        }
        cout<<p<<endl;
    }
    return 0;
}