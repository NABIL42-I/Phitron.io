#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int,int>parent[1005][1005];
int n,m;
vector<pair<int,int>> d ={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i,int j){ 
 return i>=0&&i<n&&j>=0&&j<m;
}
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    vis[si][sj]  = true;
    q.push({si,sj});
    parent[si][sj] ={-1,-1};
    while(!q.empty()){ 
        pair<int,int>par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
    for(int i = 0;i<4;i++){
    int ci = par_i + d[i].first;
    int cj = par_j + d[i].second;
  if(valid(ci,cj)&&!vis[ci][cj]&&(grid[ci][cj]=='D'||grid[ci][cj]=='.')){
    vis[ci][cj] = true;
    parent[ci][cj] = {par_i,par_j};
     q.push({ci,cj});
  }
}
    }
}
int main(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++)
            cin>>grid[i][j];
        
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    int di,dj;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(!vis[i][j]&&grid[i][j]=='R'){
                bfs(i,j);
            }
            if(grid[i][j]=='D'){
             di = i;
             dj = j;
            }
        }
    }
    if(!vis[di][dj]){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++)
            cout<<grid[i][j];
            cout<<endl;
        }
    }
    else{
        int x = di,y = dj;
        while(1){
            // grid[x][y] = 'X';
           pair<int,int>par = parent[x][y];
           x = par.first;
           y = par.second;
           if(grid[x][y]=='R') break;
           grid[x][y] = 'X';
        }
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++)
                cout<<grid[i][j];
            cout<<endl;
        }
    }
    return  0;
}