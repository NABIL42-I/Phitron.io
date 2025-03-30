#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
int level[105][105];
int n,m;
vector<pair<int,int>>d={{1,2},{2,1},{-1,2},{-2,1},{-1,-2},{-2,-1},{1,-2},{2,-1}};
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    else return true;
}
void bfs(int si,int sj){
queue<pair<int,int>>q;
vis[si][sj] = true;
q.push({si,sj});
level[si][sj] = 0;
while(!q.empty()){
    pair<int,int>par = q.front();
    q.pop();
    int par_i = par.first;
    int par_j = par.second;
    for(int i = 0;i<8;i++){
        int ci = par_i + d[i].first;
        int cj = par_j + d[i].second;
        if(valid(ci,cj)&&!vis[ci][cj]){ 
            vis[ci][cj] = true;
            level[ci][cj] = level[par_i][par_j] + 1;
             q.push({ci,cj});

    }
}
}
}
int main(){
   int t;cin>>t;
   while(t--){
    cin>>n>>m;
    // int grid[n][m];
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int si,sj;cin>>si>>sj;
    bfs(si,sj)
    int di,dj;cin>>di>>dj;
    if(vis[di][dj]==false) cout<<"-1\n";
    else {
      cout<<level[di][dj]<<endl;
    }
   }
    return 0;
}

