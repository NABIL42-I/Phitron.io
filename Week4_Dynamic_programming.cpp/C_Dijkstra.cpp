#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>>adj_list[100005];
bool vis[100005];
ll path[100005];
ll parent[100005];
void dijkstra(ll src){
    vis[src] = true;
path[src] = 0;
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
q.push({0,src});
parent[src] = -1;
while(!q.empty()){
    auto par = q.top();
    q.pop();
    ll par_node = par.second;
    ll par_dis = par.first;
    for(auto child : adj_list[par_node]){
        ll child_node = child.first;
        ll child_dis = child.second;
        if(child_dis+par_dis<path[child_node]){
         path[child_node] = child_dis+par_dis;
         parent[child_node] = par_node;
         q.push({child_dis+par_dis,child_node});
         
         vis[child_node] = true;
        }
    }
}
}
int main(){
    ll n,e;cin>>n>>e;
  while(e--){
    ll a,b,c;cin>>a>>b>>c;
    adj_list[a].push_back({b,c});
    adj_list[b].push_back({a,c});
  }
  memset(vis,false,sizeof(vis));
  for(ll i =1;i<=n;i++){
    path[i] = LLONG_MAX;
  }
  memset(parent,-1,sizeof(parent));
  dijkstra(1);
  if(!vis[n]) {
    cout<<"-1"<<endl;return 0;
  }
ll node;vector<ll>v;
node = n;
// v.push_back(node);
  while(node!=-1){
   v.push_back(node);
   node = parent[node];
  }
//   cout<<path[2];
reverse(v.begin(),v.end());
for(ll i : v)
cout<<i<<" ";
  return 0;
}