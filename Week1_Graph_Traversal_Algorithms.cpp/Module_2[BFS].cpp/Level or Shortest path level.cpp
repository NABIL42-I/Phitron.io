#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
int level[1005];
void bfs(int srch){
queue<int>q;
q.push(srch);
vis[srch] = true;
level[srch] = 0;
while(!q.empty()){
    int par = q.front();
    q.pop();
    // cout<<par<<" ";
for(int child : adj_list[par]){
    if(vis[child]==false){
        q.push(child);
        vis[child] = true;
        level[child] = level[par]+1;
    }
}
}
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int srch;cin>>srch;
    int node;cin>>node;
    bfs(srch);
    for(int i = 0;i<n;i++){
        cout<<i<<" -> "<<level[i]<<endl;
    }
    cout<<level[node];
    return 0;
}