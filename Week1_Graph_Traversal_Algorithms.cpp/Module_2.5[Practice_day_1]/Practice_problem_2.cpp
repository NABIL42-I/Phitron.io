#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
int level[1005];
bool vis[1005];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        //cout<<par<<" ";
        for(int child: adj_list[par]){
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
    bfs(0);
   int l;cin>>l;
   vector<int>v;
for(int i = 0;i<n;i++){
    if(level[i] == l)
     v.push_back(i);
}
    sort(v.begin(),v.end(),greater<int>());
    for(int i : v)
    cout<<i<<" ";
    return 0;
}