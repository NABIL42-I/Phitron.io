#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  ll t;cin>>t;
  priority_queue<ll>pq;
  map<ll,ll>mp;
  while(t--){
    ll x;cin>>x;
    if(x==1){
      ll val;cin>>val;
      pq.push(val);
      mp[val]++;
    }
    else if(x==2){
      if(pq.empty()){
        cout<<"empty\n";
      }
      else{ 
      queue<ll>q;ll mx = -1;ll tar;
      while(!pq.empty()){ 
        if(mp[pq.top()]>mx){
              mx = mp[pq.top()];
              tar = pq.top();
        }
        q.push(pq.top());
        pq.pop();
      }
      while(!q.empty()){
        pq.push(q.front());
        q.pop();
      }
   cout<<tar<<"\n";
   mp[tar] /= 2;
    }
  }
  }
  return 0;
}