#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    else return true;
}
void dfs(int sr,int sc){
    vis[sr][sc] = true;
    for(int k = 0;k<4;k++){
        int cr = sr + d[k].first;
        int cc = sc + d[k].second;
        if(valid(cr,cc)&&!vis[cr][cc]&&grid[cr][cc]!='#')
        dfs(cr,cc);
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
    int cnt= 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j]=='.'){
                if(vis[i][j]==false){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}