#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    int adj_mat[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
             adj_mat[i][j] = 0;
            if(i==j) adj_mat[i][j]=1;
        }
    }
    while(e--){
        int a,b;cin>>a>>b;
        adj_mat[a][b] = 1;
    }
   int q;cin>>q;
   while(q--){
    int a,b;cin>>a>>b;
    if(adj_mat[a][b]) cout<<"YES\n";
    else cout<<"NO\n"; 
   }
    return 0;
}