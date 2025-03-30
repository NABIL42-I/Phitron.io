#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
void bfs(int srch){
queue<int>q;
q.push(srch);
vis[srch] = true;
while(!q.empty()){
    int par = q.front();
    q.pop();
    // cout<<par<<" ";
for(int child : adj_list[par]){
    if(vis[child]==false){
        q.push(child);
        vis[child] = true;
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
    int srch;cin>>srch;
    int des;cin>>des;
    bfs(srch);
    if(vis[des])
    cout<<"true";
    else cout<<"true";
    return 0;
}