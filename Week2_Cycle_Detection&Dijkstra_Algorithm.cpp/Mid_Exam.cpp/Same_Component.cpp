#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n,m;
vector<pair<int,int>>d={{1,0},{-1,0},{0,-1},{0,1}};
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    else return true;
}
void dfs(int si,int sj){
    vis[si][sj] = true;
    for(int i = 0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.') 
        dfs(ci,cj);
    }
}

int main(){
    cin>>n>>m;
    memset(vis,false,sizeof(vis));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int si,sj;cin>>si>>sj;
    dfs(si,sj);
    int di,dj;cin>>di>>dj;
    if(vis[di][dj]) cout<<"YES";
    else cout<<"NO";
    return 0;
}