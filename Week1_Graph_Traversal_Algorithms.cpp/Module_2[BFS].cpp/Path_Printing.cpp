#include<bits/stdc++.h>
using namespace std;
bool vis[1005];
int path[1005];
void bfs(int source,vector<int>adj_list[]){
    queue<int>q;
     q.push(source);
     vis[source] = true;
     path[source] = -1;
     while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for(int child : adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child] = true;
                path[child] = par;
            }
        }
     }
     
}
int main(){
    int n,e;cin>>n>>e;
    vector<int>adj_list[n];
     while(e--){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }
     memset(vis,false,sizeof(vis));
     memset(path,-1,sizeof(path));
     int source;cin>>source;
     bfs(source,adj_list);
     int des;cin>>des;
     int node = des;
     vector<int>v;
     while(node!=-1){
        // cout<<node<<" ";
        v.push_back(node);
        node = path[node];
     }
     reverse(v.begin(),v.end());
     for(int i : v){
        cout<<i<<" ";
     }
     return 0;
}