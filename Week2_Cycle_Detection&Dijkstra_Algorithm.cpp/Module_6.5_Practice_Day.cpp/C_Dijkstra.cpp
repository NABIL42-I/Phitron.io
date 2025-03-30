#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[100005];
long long  path[100005];
int parent[100005];
void dijkstra(int src){
path[src] = 0;
priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>q;
q.push({0,src});
parent[src] = -1;
while(!q.empty()){
    auto par = q.top();
    q.pop();
    int par_node = par.second;
    int par_dis = par.first;
    for(auto child : adj_list[par_node]){
        int child_node = child.first;
        int child_dis = child.second;
        if(child_dis+par_dis<path[child_node]){
         path[child_node] = child_dis+par_dis;
         parent[child_node] = par_node;
         q.push({child_dis+par_dis,child_node});
        }
    }
}
}
int main(){
    int n,e;cin>>n>>e;
  while(e--){
    int a,b,c;cin>>a>>b>>c;
    adj_list[a].push_back({b,c});
    adj_list[b].push_back({a,c});
  }
  for(int i =1;i<=n;i++){
    path[i] = INT_MAX;
    parent[i] = -1;
  }
  dijkstra(1);
  if(path[n]==INT_MAX) {
    cout<<"-1"<<endl;return 0;
  }
int node;vector<int>v;
node = n;
// v.push_back(node);
  while(node!=-1){
   v.push_back(node);
   node = parent[node];
  }
//   cout<<path[2];
reverse(v.begin(),v.end());
for(int i : v)
cout<<i<<" ";
  return 0;
}