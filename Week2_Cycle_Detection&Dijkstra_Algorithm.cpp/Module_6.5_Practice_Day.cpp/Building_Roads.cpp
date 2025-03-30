#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[500005];
bool vis[500005];
int c;
void dfs(int src){
    vis[src] = true;
    for(int child : adj_list[src]){
        if(!vis[child]) dfs(child);
    }
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b;cin>>a>>b;
 adj_list[a].push_back(b);
 adj_list[b].push_back(a);
    }
    vector<int>v;
    c=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
        v.push_back(i);
        c++;
        dfs(i);
        }
    }
    c--;
    cout<<c<<endl;
    if(!c) return 0;
    int prev,count=0;
    for(auto i : v){ 
        // count++;
         if(count==2){
            cout<<endl<<prev<<" ";
            count=1;
         }
         cout<<i<<" ";
         prev= i;
         count++;
    }
    return 0;
}